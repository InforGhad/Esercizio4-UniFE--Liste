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

  while (mial1!=NULL) {
    printf("%d, ", mial1->elemento);
    mial1=mial1->next;
  }
  return 0;
}
