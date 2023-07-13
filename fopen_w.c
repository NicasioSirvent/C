#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE* ff;
  char* nm = "archivo.txt";
  if ((ff = fopen(nm, "wt")) == NULL){ //abro para escribir archivo texto.
    puts("Error al crear archivo");
    exit(-1);
  }
  fclose(ff);
  return 0; 
} 
