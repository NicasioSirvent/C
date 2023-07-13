#include <stdio.h>

void main(){
  //void f(int i), g(void); //declaracion, definidas en m2.
  extern int n; //n esta definida en m2.
  f(8);  //f() definida en m2
  n++;
  g();  //otra que tal en m2
  puts("Fin del programa.\n");
}
