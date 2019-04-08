#include "funzioni.h"
#include <stdio.h>
#include <stdlib.h>

// Inserimento in testa
lista inst(int scelta, lista miaL) {
  lista t;
  t = (lista)malloc(sizeof(item)); // Definisco nuovo nodo
  t->elemento = scelta;            // Inserisco l'elemento
  t->next = miaL;                  // Punto al prossimo nodo.
  return t;                        // Ritorno l'ultimo nodo.
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

int member(int e, lista L) { // Ricerca
  if (L == NULL) // Se arrivi a questo punto, vuol dire che l'elemento non è
                 // stato TROVATO
    return -1;   // l'output -1, indica un esito negativo
  else {
    if (L->elemento == e)
      return 1; // l'output 1, indica un esito POSITIVO, yeah!
    else {
      L = L->next; // Punta al prossimo nodo.
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
      NULL; // Assegno al nuovo indirizzo NULL, ovvero, la nuova coda.
  return l;
}

// Crea una lista vuota, nel momento in cui non ci sono nodi
lista empty_list(int e, lista l) {
  l = (lista)malloc(sizeof(item));
  l->elemento = e;
  l->next = NULL;
  return l;
}

lista sublist(int n, lista l) {
  int i = 0;
  boolean find = FALSE;
  while (!find) { // FInchè non raggiungi l'elemento da cui iniziare a stampare,
                  // continua a girare
    l = l->next;
    // printf("\n**i= %i**\n", i);log
    if (i == n) {
      stampa(l);
      find = TRUE; // TROVATO YEAH! Ora posso uscire.
    }
    i++;
  }
  return l;
}

int lslenght(lista l) {
  int i;
  for (i = 0; l != NULL; l = l->next, i++)
    ;
  return i;
}

int sumlist(lista l) {
  int tot = 0;
  while (l != NULL) {
    tot += l->elemento; // Somma l'elemento
    // printf("tot=%d\t", tot);log
    l = l->next; // Punta al prossimo nodo
  }
  return tot;
}
