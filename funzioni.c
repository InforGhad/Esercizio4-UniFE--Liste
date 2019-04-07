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
  lista tmp = NULL;
  for (tmp = l; tmp->next != NULL; tmp = tmp->next)
    ; // Cerco ultimo elemento
  // Trovato l'ultimo elemento, creo un nuovo nodo
  tmp->next = (lista)malloc(sizeof(item));
  //|->Assegno all'ultimo valore(che prima era NULL), un indirizzo, del nuovo
  // valore

  tmp->next->elemento = e; // Assegno al nuovo indirizzo, il valore scelto
  tmp->next->next =
      NULL; // Assegno al nuovo indirizzo NULL, ovvero, la nuova head.
  return l;
}

lista empty_list(int e, lista l) {
  l = (lista)malloc(sizeof(item));
  l->elemento = e;
  l->next = NULL;
  return l;
}
