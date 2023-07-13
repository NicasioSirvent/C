#include <stdio.h>

struct infoPersona {
  char nombre[20];
  char calle[30];
  char ciudad[25];
  char provincia[25];
  char codigoPostal[6];
  int numeroOrejas;
};

/* Prototipos */
void entradaPersona(struct infoPersona* pp);
void verPersona(struct infoPersona p);

void main(void) {
  struct infoPersona regDat;
  entradaPersona(&regDat); //por referencia/direccion.
  verPersona(regDat);
  puts("Pulsa Cualquier Tecla para continuar");
  getchar();
}

void entradaPersona(struct infoPersona* pp){
  puts("\n **** Entrada de Datos de una Persona ****\n");
  printf("Nombre:"); gets(pp->nombre);
  printf("Calle:"); gets(pp->calle);
  printf("Ciudad:"); gets(pp->ciudad);
  printf("Provincia:"); gets(pp->provincia);
  printf("Codigo Postal:"); gets(pp->codigoPostal);
  printf("Numero Orejas:"); scanf("%d", &(pp->numeroOrejas));
}

void verPersona(struct infoPersona p) {
  puts("\n **** Informacion Relativa a la Persona ****\n");
  puts(p.nombre);
  puts(p.calle);
  puts(p.ciudad);
  puts(p.provincia);
  puts(p.codigoPostal);
  printf("%d\n", p.numeroOrejas);
}
