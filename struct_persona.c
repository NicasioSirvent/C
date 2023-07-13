#include <stdio.h>

struct persona {
  char nombre[30];
  int edad;
  float altura;
  float peso;
};

void main(){
  struct persona pepe;
  printf("%lu\n", sizeof(pepe));
}
