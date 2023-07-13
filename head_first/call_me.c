#include <stdio.h>

void call_me( char msg[] ){
  puts( msg );
//  printf( "%c\n", *msg ); //msg es *char
//  puts( msg+6 );

}

int main(){
  char* msg_from_ana = "Don't Call Me!";
  call_me( msg_from_ana );
  return 0;
}
