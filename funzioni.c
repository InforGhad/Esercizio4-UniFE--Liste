#include "funzioni.h"
#include <stdio.h>
#include <stdlib.h>

lista inst(int scelta, lista miaL) {
  lista t;
  t = (lista)malloc(sizeof(item));
  t->elemento = scelta;
  t->next = miaL;
  return t;
}

lista stampa(lista L) {
  if (L == NULL)
    return L;
  else {
    printf("%d, ", L->elemento);
    L = L->next;
    return stampa(L);
  }
}

int member(int e, lista L) {
  if (L == NULL)
    return -1;
  else {
    if (L->elemento == e)
      return 1;
    else {
      L = L->next;
      return member(e, L);
    }
  }
}

lista cons_tail(int e, lista l) {
  lista prec, aux;
  lista patt = l;
  aux = (lista)malloc(sizeof(item));
  // printf("aux=%d\n", aux);
  // ALLOCA NODO
  aux->elemento = e;
  aux->next = NULL;
  if (l == NULL) {
    // printf("Inserisco in lista vuota\n");
    return aux; // INSERISCE IN LISTA VUOTA

  } else {
    while (patt != NULL) // NON FINE LISTA

    {
      prec = patt;
      // printf("\n----\n");
      // printf("***prec=%d\n", prec);
      // printf("*patt value=%d ", patt->elemento);

      patt = patt->next;
      // printf("**patt=%d\n", patt);
      // printf("\n----\n");
    }
    // printf("\n");
    prec->next = aux; // AGGIUNGE IN FONDO
    // printf("Assegno a prec, aux\n");
    // printf("*!prec next=%d\n", prec->next);
    // printf("*!prec value=%d\n", prec->next);
    return l; // RESTITUISCE RADICE l
  }
}
