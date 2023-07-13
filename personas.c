#include <stdio.h>

struct t_persona{
  char nombre[30];
  int edad;
  int altura;
  int peso;
};

typedef struct t_persona persona;
//prototipos
void mostrar_persona(persona *);

void main(){
  int i;
  persona empleados[] = { {"Mortimer, Pepe", 46, 182, 87},
                          {"Garcia, Antonio", 30, 164, 58},
                          {"Sirvent Curro", 35, 164, 143} };
  persona *p = empleados;

  for(i=0; i<3; i++, p++)
    mostrar_persona(p);
}

void mostrar_persona(persona *ppt){
  printf("\nNombre:\t%s", ppt->nombre);
  printf("\nEdad:\t%d", ppt->edad);
  printf("\nAltura:\t%d", ppt->altura);
  printf("\nPeso:\t%d", ppt->peso);
}
