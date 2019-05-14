typedef struct pilha Pilha;

Pilha* iniciaPilha();

int verificaVazia(Pilha *p);

int verificaCheia(Pilha *p);

void inserePilha(Pilha *p, int valor);

int removePilha(Pilha *p);

void imprimirPilha(Pilha *p);

void liberarPilha(Pilha *p);
