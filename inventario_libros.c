#include <stdio.h>
#include <string.h>
#define MAXTIT 40
#define MAXAUT 40
#define MAXLIB 100
#define STOP ""

struct biblio {
  char titulo[MAXTIT];
  char autor[MAXAUT];
  float precio;
};

int main(){
  struct biblio libro[MAXLIB]; //array de estructuras biblio.
  int cont = 0;
  int indice;

  printf("Introduzca el título del libro. \n");
  printf("Pulse [Enter] al comienzo para parar. \n");

  while (cont < MAXLIB && strcmp(fgets(libro[cont].titulo,40, stdin), STOP) != 0 ) {
   printf("%s", libro[cont].titulo);
   // gets(libro[cont].titulo);
   if( strcmp( libro[cont].titulo, STOP) == 0 ) break;
    printf("Introzca ahora el autor\n");
    fgets(libro[cont].autor,40,stdin);
    printf("Y el precio...\n");
    scanf("%f", &libro[cont++].precio);

    while (getchar() != '\n'); //limpia linea de entrada???
    if (cont < MAXLIB)
      printf(" Introduzca el siguiente título\n");
  }
  printf("Ahi va su lista de libros!!\n");
  for (indice = 0; indice < cont; indice++)
    printf("%s por %s: %.2f pts.\n", libro[indice].titulo, libro[indice].autor, libro[indice].precio);
}
