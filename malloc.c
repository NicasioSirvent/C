#include <stdio.h>
#include <string.h>

void main(){
  char cadena[122], *ptr; //array con suficiente longitud,  puntero a char.
  int longitud;  //longitud de memoria a reservar.

  puts("\nIntroduce un linea de texto\n");
  scanf("%[^\n]s", cadena); //coge todo hasta encontrar un \n, y guarda en cadena (añadiendo \0);
  //gets(cadena);

  longitud = strlen(cadena); //longitud de la cadena.
  ptr = (char*) malloc ((longitud+1) * sizeof(char)); //longitud de cadena + tamaño de char -> bytes.
  strcpy(ptr, cadena);  //copio a memoria lo tecleado.
  printf("ptr= %s", ptr);  //no es *ptr?
  free(ptr);  //libero memoria.
}
