#include <stdio.h>
#include <stdlib.h>
#define TOPE 1999

int main() {

  double *ptr_lista = (double*)malloc(1000*sizeof(double));
  if(ptr_lista == NULL){
    puts("Error en la asignacion de memoria");
    return -1;
  }

  for (int i=0; i<1000; i++)
    ptr_lista[i] = (double) random();

  free(ptr_lista);
  return 0;
}
