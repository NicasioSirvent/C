#include <stdio.h>

void visualizar(float [], int num);
void ordenar(float [], int num);
void intercambiar(float *, float *);

int main(){
  float numeros[] = {2.34, 3.45, 6.34, 6.43, 6.22, 1.46, 4.37};
  visualizar(numeros, 7);
  ordenar(numeros, 7);
  visualizar(numeros, 7);
  return 0;
}

void ordenar(float array_num[], int num){
  int i;
  for(int j=num-1; j>0; j--){ //hago 1 pasada, desde ultimo... 
    for (i=0; i<j; i++){   //rastreo array desde 0 hasta j, burbujeando el mayor de todos hasta el final (n).
      if(array_num[i] > array_num[i+1])  //si i0 mayor que i1, intercambio..
        intercambiar(&array_num[i], &array_num[i+1]);
    }
  }
}

void intercambiar(float *a, float *b){
  float temp = *a;
  *a = *b;
  *b = temp;
}

void visualizar(float a[], int num){
  for (int i=0; i<num; i++)
    printf("%f\t", a[i]); 
  printf("\n");
}  
