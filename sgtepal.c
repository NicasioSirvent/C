#include <stdio.h>
#include <string.h>

void sgtepal(char *p);

void main(){
  char linea[81];
  printf("Intruduce una bonita frase.\n");
  fgets(linea,80,stdin);

  while(*linea){  //mientras linea no 0.
    puts(linea);  //escribir linea actual
    sgtepal(linea);  //pasar linea a sgtepal
  }
}

void sgtepal(char* p){
  int j = strlen(p) - 1; // j es tamaño menos uno, es decir, ubicacion de ultima letra.

  while( j>0 && p[j]!=' ' )  //bajamos j hasta encontrar espacio.
    j--;

  p[j] = '\0'; //y en el espacio ponemos \0 MUCHO CUIDADO, NO PONER DOBLES COMILLAS!
}  
