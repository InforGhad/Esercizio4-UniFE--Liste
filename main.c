#include "funzioni.h"
#include <stdio.h>
#include <stdlib.h>
// Lista di interi
int main(int argc, char const *argv[]) {
  int scelta;
  lista mial1 = NULL;
  boolean out = FALSE;
  do {

    printf("Inserisci valore, 0 per uscire:\n");
    scanf("%d", &scelta);
    if (scelta == 0)
      out = TRUE;
    else
      mial1 = cons_tail(scelta, mial1);
  } while (!out);
  printf("STAMPA ELEMENTI\n");
  stampa(mial1);

  do {
    printf("Inserisci valore, 0 per uscire:\n");
    scanf("%d", &scelta);
    // primo elemento
    if (scelta == 0)
      out = TRUE;
    else {

      if (mial1 == NULL) {
        mial1 = (lista)malloc(sizeof(item));
        mial1->elemento = scelta;
        mial1->next = NULL;
      } else {
        printf("else\n");
        lista q;
        for (q = mial1; q->next != NULL; q = q->next)
          ;
        q->next = (lista)malloc(sizeof(item));
        q->next->elemento = scelta;
        q->next->next = NULL;
      }
    }

  } while (!out);

  printf("STAMPA ELEMENTI\n");
  stampa(mial1);
  int el;
  printf("\nInserisci elemento da cercare: ");
  scanf("%d", &el);

  printf("%s\n", (member(el, mial1) >= 0) ? "trovato" : "non trovato");

  return 0;
}
