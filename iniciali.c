#include <stdio.h>

/*
El programa iniciali lee  enteros y a continuacion calcula su suma.
*/

#define TAM 8

int main(){

  int suma=0;
  int indice;
  int prueba[] = {13,5,15,34,34};
  int enteros[TAM];
  
  printf("Array de %d elementos\n", TAM);
  for( indice = 0; indice < TAM; indice++ ){
    printf("Posicion %d:\n", indice+1);
    scanf("%d", &enteros[indice]);
    suma += enteros[indice];
  }
 
  printf("\n\nLa suma total es %d\n", suma);
  
  printf("\nLista de prueba:  ");
  for( indice = 0; indice < sizeof(prueba)/sizeof(int); indice++ ){
    printf("%d ", prueba[indice]);
  }
  puts("\n");
}
