#include <stdio.h>
#include <string.h>

#define ELOGIO "¡Por Júpiter, que gran nombre!"

int main(){
  char nombre[40];
  puts("¿Cómo te llamas?");
  scanf("%s", nombre);
  printf("Hola, %s, %s\n", nombre, ELOGIO);
  printf("btw, tu nombre de %ld letras ocupa %ld celulas de memoria\n", 
                strlen(nombre), sizeof(nombre));
  printf("la frase de elogia contiene %ld letras y ocupa %ld celulas de memoria\n", strlen(ELOGIO), sizeof(ELOGIO));
  return 0;
}
