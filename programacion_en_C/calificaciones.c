#include <stdio.h>
#define NUM 10

int main() {
  int i, suma, maximo, valor[NUM];

  printf("Intruduzca 10 valores:\n");
  for (i = 0; i < NUM; i++)
    scanf("%d", &valor[i]);
  printf("Aqui estan los valores:\n");
  for (i = 0; i < NUM; i++)
    printf("%5d", valor[i]);
  printf("\n");
  for (suma = 0, i = 0; i < NUM; i++)
    suma += valor[i];
  printf("El promedio de las calificaciones es %d \n", suma/NUM);
  
  for (maximo=valor[0],i=1; i<NUM; i++)
    if (valor[i] > maximo)
      maximo = valor [i];
  printf("La maximo calificacion es: %d. \n", maximo);
  
  return 0;
}
