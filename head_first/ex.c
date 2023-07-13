#include <stdio.h>

int main() {

  char ex[20];  //declaro array tipo char 20.
  puts("Escribe el nombre de tu ex"); //mensaje puts.
  scanf("%19s", ex); //recojo respuesta, nombre es puntero a array. 
  printf("Querida %s\n ¡Eres Historia!\n", ex); //mensaje afectivo.
  return 0;  //return 0 (tipo int).
}
