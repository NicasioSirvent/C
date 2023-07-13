#include <stdio.h>
#include <ctype.h>

int main(){
  char resp;
  printf("Varon(V) o Hembra(H)?:");
  scanf("%c", &resp);
  switch( toupper(resp) ){
    case 'V':
      puts("Es un Enfermero");
      break;
    case 'H':
      puts("Es una maestra");
      break;
    default:
      puts("Mi no Entender");
      break;
  }
  return 0;
}
