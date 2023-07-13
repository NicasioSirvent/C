#include <stdio.h>
#include <string.h>

void herejizame( char* name );

int main() {
  char nombre[] = "El arzobispo de Constantinopla esta Arzobispoconstantinopolizado";
  puts(nombre);
  herejizame(nombre);
  puts(nombre);
}

void herejizame( char* name ){
  //strcpy(name,"Ahora me he pasado al Islam");
  name = "Ahora me he pasado al Islam";
}
