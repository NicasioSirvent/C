#include <stdio.h>
#include <stdlib.h>

//globales
typedef struct nodo_t nodo;
struct nodo_t {
  int numero;
  struct nodo_t *enlace;
};

//prototipos
void insertar(nodo **ptr, int num);
void mostrar(nodo *ptr);
void borrar(nodo *ptr);


int main(void) {
  nodo *cabezaPtr = NULL;
  int numero;

  puts("Inserta nuevos nodos con numero, '0' para terminar");
  scanf("%d", &numero);
  while (numero != 0){
    insertar(&cabezaPtr, numero); 
    scanf("%d", &numero);
  } 
  mostrar(cabezaPtr);
  borrar(cabezaPtr);
  return 0;
}

void insertar(nodo **cabezaPtr, int num){
  nodo *ptr1, *ptr2;
  
  ptr1 = *cabezaPtr;  
  if(ptr1 == NULL) { //creo nueva lista...
    ptr1 = (nodo *)malloc(sizeof(nodo));
    ptr1->numero = num;
    ptr1->enlace = NULL;
    *cabezaPtr = ptr1;

  } else { //añado elemento...
    while(ptr1->enlace != NULL)  //me voy a ultimo nodo..
      ptr1 = ptr1->enlace;
  
    ptr2 = (nodo *)malloc(sizeof(nodo));
    ptr2->numero = num;
    ptr2->enlace = NULL;
    ptr1->enlace = ptr2;
  }
}

void mostrar(nodo *ptr) {
  while (ptr != NULL){
    printf("%d\n", ptr->numero);
    ptr = ptr->enlace;
  } 
}

void borrar (nodo *ptr) {
  nodo *ptrAux;
  while (ptr != NULL){
    ptrAux = ptr->enlace;
    free(ptr);
    ptr = ptrAux;
  }
}
