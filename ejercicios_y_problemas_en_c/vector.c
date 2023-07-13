#include <stdio.h>
#include <string.h>

void main(){
  int vector[5];
  int i;

//  for (i=0; i<5; i++)
//    vector[i] = 0;
  memset( vector, 0, sizeof(vector));

  for (i=0; i<6; i++)
    printf("%2d", vector[i]);

  //printf("El tamaño del array es %d bytes.\n", sizeof(int)*5);
  //printf("El tamaño del array es %d elementos.\n", sizeof(vector)/sizeof(int) );
  printf("El tamaño del array es %lu bytes.\n", sizeof(vector));
}
