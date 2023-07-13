#include <stdio.h>

int ScanString(char *, char, int *);

int ScanString(char *pcS, char c, int *piCnt){
  int iLen = 0; //para devolver tamaño.
  *piCnt = 0;  //inicializo contador a 0.
  while (*pcS != '\0'){
    if (*pcS == c)  //si concide, contador++;
      (*piCnt)++;
    iLen++;
    pcS++;
  }
  return (iLen);
}
 
void main(){
  char sT[] = "Esta es una frase de prueba como otra cualquiera";
  char cSrch = 'e';
  int iHits, iLen;

  iLen = ScanString( sT, cSrch, &iHits);
  printf("Scanned String:\n"
    "\"%s\"\nString Length: %d\n"
    "Found %d occurrences of '%c'\n",
    sT, iLen, iHits, cSrch);
}
