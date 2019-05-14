typedef struct pilha Pilha;

Pilha* criar();

int vazia(Pilha *p);

int cheia (Pilha *p);

void inserir(Pilha *p, char valor);

char remover(Pilha *p);

void imprimir(Pilha *p);

void liberar(Pilha *p);



