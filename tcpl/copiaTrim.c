#include <stdio.h>

//copia input a output, sustituyendo uno o mas espacios por uno.
//ni idea....
int main(){
  int c;
  int enEspacio = 0;
  
  while( (c = getchar()) != EOF ){
/*
    if( c == ' ' )
      if( enEspacio == 0 )
        enEspacio = 1;
      else
        continue;
    else
      enEspacio = 0;
*/

   //mas sucinto, pero mas oscuro... no se si vale la pena por una linea...
    if (c != ' ')
      enEspacio = 0;
    else if (enEspacio == 0)
      enEspacio = 1;
    else
      continue;
  
    putchar(c);
  }
  return 0;
}
