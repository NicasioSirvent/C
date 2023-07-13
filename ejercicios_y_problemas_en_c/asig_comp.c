#include <stdio.h>

int main(void){
  int val = 8; //b1000
  //int val = 0b1000; // b1000
  //val <<= 1; //16
  //val >>= 1; //4
  //val &= 1; //0
  //val |= 1; //9
  val ^= 1; //9
  printf("%d", val);
  return 0;
}
