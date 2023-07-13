#include <stdio.h>

void f1( const int x, const int* y){
  //x = 10;
  //*y = 11;
  //y es un puntero,el valor de y es la direccion de "y"
  //*y es el valor de "y".
  //la direccion de y es la direccion del puntero.
  printf("%x", y);
  y = &x; //aqui estoy cambiando valor de puntero local, ya no apunta a "y"
          //pero valor de "y" no cambia.
}

int main(){
  int x, y;
  x = y = 5;
  f1(x, &y);
  printf("x:%d, y:%d, &y=%x\n",x, y, &y);
 // f2();
  return 0;
}
