#include <stdio.h>

int main(){
  int numero, digitos;

  printf("Enter a number < 10000\n");
  scanf("%d", &numero);


  if (numero < 10) digitos = 1;
  else if (numero < 100) digitos = 2;
  else if (numero < 1000) digitos = 3;
  else digitos = 4;

  printf("The number %d has %d digits\n", numero, digitos);

  return 0;
}
