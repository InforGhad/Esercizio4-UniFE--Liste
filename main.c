

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

    // primo elemento
    if (scelta == 0)
      out = TRUE;

    else {
      mial2 = inst(scelta, mial2);

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
  scelta = FALSE;
  do {
    int slc = 0;
    printf(
        "1)Ricerca elemento, \n2)Sublist \n3)Lenght \n4)Sumlist \n5)Uscita\n");
    scanf("%d", &slc);

    switch (slc) {
    case 1: {
      int el;
      printf("\nInserisci elemento da cercare: ");
      scanf("%d", &el);

      printf("%s\n", (member(el, mial1) >= 0) ? "trovato" : "non trovato");
      break;
    }
    case 2: {
      int n;
      printf("Inserisci dopo quanti elementi vuoi stampare la lista:\n");
      scanf("%d", &n);

      sublist(n - 1, mial1);
      printf("\n");
      stampa(mial1);
      printf("\n");
      break;
    }

    case 3: {
      printf("\n**La lunghezza della lista e':%d", lslenght(mial1));
      printf("\n");
      break;
    }

    case 4: {
      printf("Case 4\n");
      printf("La somma degli elementi nella lista è:%d", sumlist(mial1));
      break;
    }

    default: { scelta = TRUE; }
    }

  } while (!scelta);

  return 0;
}
