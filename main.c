#include "funzioni.h"
#include <stdio.h>
#include <stdlib.h>
// Lista di interi
int main(int argc, char const *argv[]) {
  int scelta;
  lista mial1 = NULL, mial2 = NULL;
  boolean out = FALSE;

  do {
    printf("Inserisci valore, 0 per uscire:\n");
    scanf("%d", &scelta);

    mial2 = inst(scelta, mial2);
    // primo elemento
    if (scelta == 0)
      out = TRUE;
    else {

      if (mial1 == NULL) { // Assegno primo elemento in una lista
        mial1 = empty_list(scelta, mial1);
      } else {
        mial1 = cons_tail(scelta, mial1);
      }
    }

  } while (!out);

  printf("STAMPA ELEMENTI\n");
  stampa(mial1);
  printf("\n");
  stampa(mial2);
  int el;
  printf("\nInserisci elemento da cercare: ");
  scanf("%d", &el);

  printf("%s\n", (member(el, mial1) >= 0) ? "trovato" : "non trovato");

  return 0;
}
