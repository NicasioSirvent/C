#include <stdio.h>

void main(){
  char *p;
  char CadenaTexto[81];

  puts("Introduzca cadena a convertir:");
  scanf("%s", CadenaTexto);

  p = CadenaTexto;

  while(*p){ 
    if( (*p >= 'a') && (*p <= 'z'))
      *p -= 32;
    p++;
  }

  puts("La cadena de texto convertida es:\n");
  puts(CadenaTexto);
}
