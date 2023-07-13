#include <stdio.h>

int main(){
  int f,c,i,j;
  char car;
  printf("Cuantas filas?:");
  scanf("%d", &f);
  printf("Cuantas Columnas?:");
  scanf("%d", &c);
  printf("Qué Letra?:");
  scanf("\n%c", &car);
  for (i=0; i<f; i++){
    for (j=0; j<c; j++)
      putchar(car);
    putchar('\n');
  }
  return 0;
}
