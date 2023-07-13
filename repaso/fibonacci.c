#include <stdio.h>
long int fibonacci();

int main() {
  int n;
  printf("\nCuantos numeros de Fibonacci? :" );
  scanf("%d", &n);
  printf("\nSecuencia de Fibonacci: 0, 1");
  for (int i=2; i<n; i++)
    printf(", %ld", fibonacci());
  printf("\n");
  return 0;
}

long int fibonacci(){
  //f. es suma de 2 anteriores. y:nuevo numero sumando.., x, numero anterior.
  static int x = 0;
  static int y = 1;
  y = y + x;
  x = y - x;
  return y;
}
