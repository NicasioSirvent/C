#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,n;
  time_t t;
  
  n = 5;

  /*Inicializamos el generador de numeros aleatorios*/
  /*No incluyo time.h???? arriba*/
  //srand((unsigned) time(NULL));
  srand((unsigned) time(&t));

  /*Escribimos 5 numeros aletorios entre 0 y 49*/
  for (i=0; i < n; i++)
    printf("%d\n", rand() % 50);

  return 0;
}
