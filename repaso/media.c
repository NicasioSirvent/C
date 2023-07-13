#include <stdio.h>
#include <string.h>

int main() {
  const int totalNum = 6;
  int contadorNum = 0;
  float sumaNum = 0;  //para almacenar total provisional..
  printf("Introduzca %d números\n", totalNum);
  while (contadorNum++ < totalNum) {
    float scanNum;
    scanf("%f", &scanNum);
    sumaNum += scanNum;
  }
  printf("------\nMedia: %.2f\n------\n", sumaNum/contadorNum);
  return 0;
}
