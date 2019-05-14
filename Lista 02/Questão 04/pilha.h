typedef struct pilha Pilha;

Pilha* criar();

void inserir(Pilha *p, int valor);

int remover(Pilha *p);

int vazia(Pilha *p);

int cheia(Pilha *p);

void imprimir(Pilha *p);

void liberar(Pilha *p);

void escolherNumeros(Pilha *p);

void inverterPilhas(Pilha *p, Pilha *aux);

void jogadas(Pilha *p1, Pilha *p2);

int gerarNumAleatorio();
