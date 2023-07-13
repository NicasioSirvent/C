#include <stdio.h>
#include <ctype.h>
#include <math.h>

double miatof(char s[]){
  double val,power;
  int i, sign, esign, exp;

  for (i = 0; isspace(s[i]); i++) //skip espacios.
    ;

  sign = (s[i] == '-') ? -1 : 1;  //guardamos signo.
  if (s[i] == '+' || s[i] == '-') //y vamos a siguiente.
    i++;

  for (val = 0.0; isdigit(s[i]); i++)  //recogemos digitos.
    val = 10.0 * val + (s[i] - '0');

  if (s[i] == '.')  //si punto... 
    i++;

  for (power = 1.0; isdigit(s[i]); i++){ //recogemos digitos decimales
    val = 10.0 * val + (s[i] - '0');
    power *= 10;  //cada decimal, aumenta divisor final....
  }

  if(s[i] == 'e' || s[i] == 'E')
    i++;
  if(s[i] == '+' || s[i] == '-'){
    esign = s[i++];
    //i++;
  }
 
  for(exp=0;isdigit(s[i]);i++)
    exp=10.0 * exp + (s[i] - '0');
    
  if( esign == '-')
    return sign * (val / power) / pow(10,exp);
  else
    return sign * (val / power) * pow(10,exp);

}


int main(){
  printf("%g\n", miatof("345.35e-4"));
  return 0;
}
