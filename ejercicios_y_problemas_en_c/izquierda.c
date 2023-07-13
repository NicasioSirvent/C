#include <stdio.h>

char *izquierda(char *, int);

void main(){
  char cadena[] = "IMPORTE TOTAL";
  printf("/%s/\n", izquierda(cadena, 6));
}

char *izquierda(char *cadena, int num_car){
  char sub_cad[80];
  int i = 0;
  while (i < num_car){
    sub_cad[i] = cadena[i];
    i++;
  }
  sub_cad[i] = '\0';
  //printf("\n%s", sub_cad);
  return(sub_cad);
}
