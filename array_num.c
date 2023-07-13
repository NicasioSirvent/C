#include <stdio.h>

#define MAX 10
float muestra[MAX];

int main(){
  int i;
  printf("Introduzca %d elementos positivos\n", MAX);
  for (i=0; i<MAX; muestra[i]>0?++i:i) //si <0 ni actualizo i....
    scanf("%f", &muestra[i]);
  for (i=0; i<MAX; i++)
    printf("%f\t", muestra[i]);
  printf("\n");
  return 0;
}
