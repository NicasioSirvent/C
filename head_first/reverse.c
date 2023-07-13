#include <stdio.h>
#include <string.h>

void reverse( char* t ){
  //algoritmo:
  //primero ver longitud:
  //size_t == unsigned long int
  size_t lon = strlen( t );

  //ponemos puntero al final:
  char *s = t + lon;

  //ahora bucle, imprimimos letra y restamos posicion.. hasta principio.
  while( s >= t ){
    printf("%c", *(s--));
  }
}

int main() {
  char palabra[20];
  printf("Palabra a revolver?:");
  scanf("%19s", palabra);
  reverse( palabra );
  return 0;
}
