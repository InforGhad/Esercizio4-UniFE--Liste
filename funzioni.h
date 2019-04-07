typedef struct mialista {
  int elemento;
  struct mialista *next;
} item;

typedef item *lista;

typedef enum { FALSE, TRUE } boolean;

lista inst(int el, lista root);

lista stampa(lista L);

int member(int e, lista L);

lista cons_tail(int e, lista l);
