#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"

lista inst(int scelta, lista miaL){
  lista t;
  t=(lista)malloc(sizeof(item));
  t->elemento=scelta;
  t->next=miaL;
  return t;
}

lista stampa(lista L){
  if(L==NULL) return L;
  else{
    printf("%d, ", L->elemento);
    L=L->next;
    return stampa(L);
  }
}
