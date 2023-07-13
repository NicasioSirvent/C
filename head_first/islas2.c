#include <stdio.h>
#include <stdlib.h> //para malloc
#include <string.h> //para strdup??

/*
* Estructura island.. para lista enlazada.. 
*/
typedef struct island {   //aunque typedef, necesito poner nombre aqui para poder declarar la recursiva...
  char *name;
  char *opens;
  char *closes;
  struct island *next;  // variable recursiva, enlaza a otra estructura island....
} island;

// necesito copiar name (crear otra cadena y almacenarla en heap), por que simplemente hiciese i->name=name,
// estaria copiando la direccion de la unica cadena que existe (un buffer[80] en la funcion creadora...)
// y cuando esta cambia, cambia tambien el nombre de esta estructura.

island* create(char *name){
  island *i = malloc( sizeof(island) );
  i->name = strdup(name);
  i->opens = "09:00";
  i->closes = "17:00";
  i->next = NULL;
 
  return i;
}


// display recursivo...
// in: donde empiezo...
// bucle:  mientras i no sea null (hasta llegar al null (ultimo).
// bucle: al final del bucle: siguiente iteracion i = i->next;
void display(island *start) {
  island *i = start;
  for( ; i != NULL; i = i->next )
    printf("Nombre:%s horario:%s-%s\n", i->name, i->opens, i->closes);
}

// parecido al de arriba.
//pero necesito otro puntero next: si solo usara uno, en cuanto lo borrara ya no podria usarlo
//aqui, primero pongo next = i->next; y al final de sentencia hago i = next, para el proximo ciclo. 
void release(island *start) {
  island *i, *next = NULL;

  for( i = start; i != NULL; i = next) {
    next = i->next;
    free(i->name);
    free(i);
  }
}



// declaro puntero isla start, i, next....
// declaro buffer para fgets
// lo del for es parecido a while( fgets(...) )

int main(){
  island *start = NULL;
  island *i = NULL;
  island *next = NULL;
  char name[80];

  for( ; fgets(name, 80, stdin); i = next ){
    next = create(name);
    if( start == NULL ) start = next;
    if( i != NULL ) i->next = next;
  }
  display(start);
  release(start);
}
