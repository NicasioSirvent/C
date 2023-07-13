#include <stdio.h>
#include <string.h>


void main() {
  char cad[121]; //buffer de entrada
  char *ptr;  //puntero a char, apuntara a inicio de memoria asignada.
  int lon;  //longitud de cadena introducida, servira para asignar memoria necesaria.

  puts("\nIntroduce una linea de texto\n");
  gets(cad);

  lon = strlen(cad);
  ptr = (char*) malloc( (lon+1) * sizeof(char) );
  strcpy(ptr, cad); //hasta, desde.
  printf("ptr = %s\n", ptr);
  free(ptr);
  puts("pulsa tecla para continuar"); getchar();
}
