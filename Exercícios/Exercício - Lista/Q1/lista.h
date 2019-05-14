typedef struct lista Lista;
typedef struct amigo Amigo;

struct amigo{
    char nome[30];
    char idade[10];
    int endereco;
};

Lista* criar();

void inserir(Lista *l, amigo valor, int pos);

Amigo remover(Lista *l, int pos);

int vazia(Lista *l);

int cheia(Lista *l);

void imprimir(Lista *l, int pos);

void liberar(Lista *l);
