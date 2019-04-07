#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"
//Lista di interi
int main(int argc, char const *argv[]) {
  int scelta;
  lista mial1=NULL;
  boolean out=FALSE;
  do{
    printf("Inserisci valore, 0 per uscire:\n");
    scanf("%d", &scelta);
    if(scelta==0)
      out=TRUE;
    else
       mial1=inst(scelta, mial1);

  }while(!out);

  printf("STAMPA ELEMENTI\n");
  stampa(mial1);


  return 0;
}
