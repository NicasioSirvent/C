#include <stdio.h>

void main(void){
  struct emple{
    char nombre[40];
    int sueldo;
    int suelda;
    char direccion[30];
  } empleado;

  printf("struct:%u, long:%u\n", (unsigned int)sizeof empleado, (unsigned)sizeof (int) );
}
