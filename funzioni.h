typedef struct mialista{
  int elemento;
  struct mialista *next;
}item;

typedef item *lista;

typedef enum{FALSE, TRUE}boolean;

lista inst(int el, lista root);
