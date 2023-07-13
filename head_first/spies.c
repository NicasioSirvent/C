#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Un binary tree, por san judas!
//struct node, pregunta y enlace a dos structs node....
typedef struct node {
  char *question;
  struct node *no;
  struct node *yes;
} node;

//yes_no recibe pregunta y devuelve bool....
int yes_no(char *question){
  char answer[3];
  printf("%s? (y/n): ", question);
  fgets(answer, 3, stdin);
  return answer[0] == 'y';
}

//create, recibe pregunta y crea nuevo nodo, sin enlazar....
node* create(char *question){
  node *n = malloc( sizeof(node) );
  n->question = strdup(question);
  n->no = NULL;
  n->yes = NULL;
  return n;
}

//release, recibe nodo... 
void release( node *n ){
  if(n){
    if(n->no)
      release(n->no);
    if(n->yes)
      release(n->yes);
    if(n->question)
      free(n->question);
    free(n);
  }
}

int main(){
  //buffers...
  char question[80];
  char suspect[20];

  //creamos (3nodos): 1 nodo con 2 enlaces...
  //embrion de binary tree.
  //start es el bigote
  //abajo, siempre los sospechosos.
  // y por medio, habran preguntas que sirvan para discriminar sospechosos....
  // si no es nadie de los actuales, se pedira pregunta que sea yes para sospechoso nuevo pero no para actual con mismo "padre".
  node *start_node = create("Does suspect have a mustache");
  start_node->no = create("Loretta Barnsworth");
  start_node->yes = create("Vinny the Spoon");

  node *current;
  do { // while (continue?.....)
    current = start_node;
    while(1) {  
      if(yes_no(current->question)) { //Si tiene bigote?? -> yes
        if( current->yes ) {  //Si contesta si, ynodo sigue por yes...(hay mas preguntas...)
          current = current->yes; //poner actual al de yes...
        } else {
          printf("SUSPECT IDENTIFIED\n");  //si no sigue por yes... acaba aqui, idenfificado!.
          break; //rompe el bucle, siguiente iteracion....
        }
      } else if (current->no) {  //Si contesta no, y definido camino no......
        current = current->no;  //poner actual al de no...
              
      // si contesta no, y no definido camino al no (es ultimo...) ... 
      // Definir nuevo sospechoso! (y pregunta para identificar).
      } else { 

        /* Make the yes-node the new suspect name */
        printf("Who's the suspect? ");
        fgets(suspect , 20, stdin);
        node *yes_node = create(suspect);
        current->yes = yes_node;

        /* Make the no-node a copy of the question */
        node *no_node = create(current->question);
        current->no = no_node;

        /* The replace this question with the new question */
        printf("Give me a question that is true for %s but not for %s? ", suspect, current->question);
        fgets(question, 80, stdin);
        free(current->question);
        current->question = strdup(question);
         
        break;
      }
    }


  } while (yes_no("Run Again"));
  release(start_node);
  return 0;
}
