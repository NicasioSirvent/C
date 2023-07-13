#include <stdio.h>
#include <stdlib.h>

struct nodo {
  int num;
  struct nodo *enlace;
};
typedef struct nodo lista_num;

void insertar(lista_num **ptr, int num);
void mostrar(lista_num *ptr);
void borrar(lista_num *ptr);

int main() {
  lista_num *lista = NULL; //ptr de inicio...de cabeza
  int numero;

  scanf("%d", &numero);  
  while(numero != 0){
    //tengo que pasar &ptr, pq ptr es null!
    insertar(&lista, numero);
    scanf("%d", &numero);
  }
  mostrar(lista);
  borrar(lista);
  
  return 0;
}

void insertar(lista_num **ptr, int num){
  lista_num *p1, *p2;  
  p1 = *ptr;
  if (p1 == NULL) {  //si a null, es que lista vacia...
    p1 = (lista_num *)malloc(sizeof(lista_num));
    p1->num = num;
    p1->enlace = NULL;
    *ptr = p1;  //puntero cabeza a este nodo, y aqui se queda..
  } else {
    while (p1->enlace != NULL) //p1 busca nodo cola...
      p1 = p1->enlace;

    p2 = (lista_num *)malloc(sizeof(lista_num));  //pido mem y creo nodo...
    p2->num = num;
    p2->enlace = NULL;
    p1->enlace = p2; //... que sera nuevo nodo cola....
  }
}

void mostrar(lista_num *ptr){
  while (ptr != NULL){
    printf("%d \n", ptr->num);
    ptr = ptr->enlace;
  }
}

void borrar(lista_num *ptr){
  lista_num *aux;
  while (ptr != NULL){
    aux = ptr->enlace;
    free(ptr);
    ptr = aux;
  }
}
