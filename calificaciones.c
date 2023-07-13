/* calificaciones */
#define NUM 10
#include <stdio.h>

main(){
  int i, suma, media, maximo, valor[NUM];

  printf("Introduzca 10 valores\n");

  for(i=0;i<NUM;i++){
    scanf("%d",&valor[i]);
  }
  
  printf("Las puntuaciones leidas son...\n");
  for(i=0; i<NUM; i++){
    printf("%5d\n", valor[i]);
  }

  for(i=0, suma=0;i<NUM;i++){
    suma += valor[i];
  }
  printf("El valor de la suma es %d\n", suma);
  printf("El valor promedio es %.2f\n", (float)suma/10);

  for(i=1,maximo=valor[0];i<NUM;i++){
    if(valor[i] > maximo)
      maximo = valor[i];
  }
  printf("El maximo valor fue %d\n", maximo);
}
