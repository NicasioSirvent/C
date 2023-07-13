#include <stdio.h>

int main() {
  int n = 0; //numero de lineas
  int c; //int leido por getc (caracter leido).
  FILE *pf;
  char *nombre = "/home/n/dev/workspace/c/repaso/un_archivo";

  if ( (pf = fopen(nombre, "rt")) == NULL){
    puts("error en la operacion de apertura del archivo");
    return 1;
  } 

  while ( (c=getc(pf)) != EOF ){
    if (c == '\n'){
      n++; printf("\n");
    }else{
      putchar(c);
    }
  }

  printf("\nNúmero de lineas del archivo;: %d\n", n);
  fclose(pf);
  return 0;
}
