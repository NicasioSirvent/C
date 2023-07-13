#include <stdio.h>

int main(){
  int numeroEspacios = 0;
  int numeroTabs = 0; 
  int numeroNls = 0;
  int c;

  while ( (c=getchar())!= EOF){
    if (c == '\t')
      numeroTabs++;
    if (c == ' ')
      numeroEspacios++;
    if (c == '\n')
      numeroNls++;
  }
  printf("Numero Espacios: %d\nNúmero Lineas:%d\nNúmero Tabs:%d\n",
    numeroEspacios, numeroNls, numeroTabs);
  return 0;
}
