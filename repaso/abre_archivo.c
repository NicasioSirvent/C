#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *pf;
  char *nm = "/home/n/dev/workspace/c/repaso/un_archivo";
  pf = fopen(nm, "r");
  if (pf == NULL) {
    puts("Error al abrir Archivo");
    exit(1);
  }
}

