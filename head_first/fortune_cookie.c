#include <stdio.h>

void fortune( char fortune[] ){
  printf("El mensaje es %s\n", fortune);
  printf("El tamaño de variable es %i\n", (int)sizeof(fortune));
  printf("y esta ubicado en %p\n", fortune);
}

int main(){
  char texto[] = "No hay amor que 10 años dure";
  fortune( texto );
  return 0;
}
