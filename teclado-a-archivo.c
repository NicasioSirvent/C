#include <stdio.h>
#include <stdlib.h>  //para exit...
int main(){
  int c;
  FILE* pf;
  char* nm = "desde_teclado.txt";
  if ((pf = fopen(nm, "a+t")) == NULL){
    puts("i/o error");
    exit(-1);
  }

  while ((c = getchar()) != EOF)
    fputc(c, pf);
  
  fclose(pf);
  return 0;
}
