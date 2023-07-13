#include <math.h>
#include <stdio.h>
int main(){
  //arco cuya tangente (sen/cos) es 1 es 45º
  // pi son 180º / -> 4 * atan(1.0) 
  fprintf(stdout, "pi = %.15f\n", 4 * atan(1.0));
  return 0;
}
