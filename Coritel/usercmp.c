#include <stdio.h>
#include <string.h>
#define MAX_TRIES 3
#define ARRAY_LEN 70

typedef struct UserTag User;
struct UserTag {
  char sLastName[ARRAY_LEN+1];
  char sPassword[ARRAY_LEN+1];
};

const User usrValid = {
  "Goethe", "Faust"
};

/*User compare: 1-> ==, 0-> != */
/* strcmp devuelve 0 si iguales */
int userCmp(const User *pUsr1, const User *pUsr2){
  if ( !strcmp(pUsr1->sLastName, pUsr2->sLastName ) &&
       !strcmp(pUsr1->sPassword, pUsr2->sPassword) )
    return 1;
  else
    return 0;
}

void main(){
  User usrInput;
  int iTries;

  memset(&usrInput, 0, sizeof(User));
  iTries = 0;
  //while (!userCmp(&usrInput, &usrValid) && iTries < MAX_TRIES){
  while (iTries < MAX_TRIES){
    printf("Enter LastName: ");
    scanf("%s", usrInput.sLastName);
    printf("Enter Password: ");
    scanf("%s", usrInput.sPassword);
    if (!userCmp(&usrInput, &usrValid)){
      iTries++;
      if (iTries < MAX_TRIES)
        printf("Name doesnt match.. Try Again\n");
    } else {
      break;
    }  
  }
  if (iTries == MAX_TRIES)
    printf("\n*** User %s: Login Denied! ***\n", usrInput.sLastName);
  else
    printf("\n*** User %s: Logged in ***\n", usrInput.sLastName);
}

