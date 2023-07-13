#include <stdio.h>
#include <string.h>

char tracks[][80] = {
  "I left my heart in Harvard Med School",
  "Newark, Newark - woderful town",
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Iwo Jima"
};


void find_track(char search_for[]){
  //printf("tamaño de aguja: %i\n", (int)strlen(search_for) ) ;
  for(int i = 0; i < 5; i++ ) {
    printf("%p\n", strstr(tracks[i], search_for)); 
    if( strstr( tracks[i], search_for ) ) 
      printf( "Track %i: '%s'\n", i, tracks[i] );
  }
}

int main(){
  char search_for[80];
  printf( "Search for..:" );
  //fgets guarda el \n final, asi que nunca nunca concuerda!!!!!!!
  //fgets( search_for, 80, stdin );
  scanf( "%79s", search_for);
  find_track( search_for );
  return 0;
}
