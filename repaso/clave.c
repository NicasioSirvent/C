#include <stdio.h>

int main(){
  int clave = -9;
  int entrada;

  while (scanf("%d", &entrada)) {
// alternativo, sin break
// while (scan("%d", &entrada) && (entrada != clave))
    if (entrada != clave)
      printf("%d\n", entrada);
    else
      break;
  }
}
