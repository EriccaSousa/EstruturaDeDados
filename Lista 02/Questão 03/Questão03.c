#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "pilha.h"
#define N 20

struct pilha{
   int v[N];
   int topo;
};

int main(){
	setlocale(LC_ALL, "Portuguese");

	Pilha *pilha_01;
	Pilha *pilha_02;
	Pilha *pilhaAux;
	
	pilha_01 = criar();
	pilha_02 = criar();
	pilhaAux = criar();
	
	int i, valor, tam, cont, aux;
	
	printf("Qual tamanho que deseja para as pilhas?\n-- ");
	scanf("%d", &tam);
	
	printf("\nInforme os valores para a pilha 01:\n");
	for(i = 0; i < tam; i++){
		printf("[ %d ] - ", i);
		scanf("%d", &valor);
		inserir(pilha_01, valor);
	}
	
	printf("\nInforme os valores para a pilha 02:\n");
	for(i = 0; i < tam; i++){
		printf("[ %d ] - ", i);
		scanf("%d", &valor);
		inserir(pilha_02, valor);
	}
	
	for(i = 0; i < tam; i++){
		aux = remover(pilha_02);
		inserir(pilhaAux, aux);
	}
	
	cont  = 0;
	for(i = 0; i < tam; i++){
		if(remover(pilha_01) == remover(pilhaAux)){
			cont++;
		}
	}
	
	if(cont == tam){
		printf("Pilha 01 e Pilha 02 são iguais!\n");
	}else{
		printf("Pilhas diferentes!\n");
	}
	
	system("pause");
	return 0;
}

Pilha* criar(){
   Pilha *p = (Pilha*) malloc(sizeof(Pilha));
   p->topo = -1;
    return(p);
}

int cheia(Pilha *p){
   if(p->topo == N-1) return 1;
   else return(0);
}

void inserir(Pilha *p, int valor){
   if(p->topo == N-1) printf("A pilha está cheia");
   else{
      p->topo = p->topo+1;
      p->v[p->topo] = valor;
   }
}

int vazia(Pilha *p){
  if(p->topo == -1) return 1;
  else return 0;
}

int remover(Pilha *p){
   int valor;
   if(vazia(p)){ printf("\nA pilha esta vazia, nao eh possivel fazer remocao");
    exit(1);
   }
   valor = p-> v[p->topo];
   p->topo = p->topo-1;
   return(valor); 
}

void imprimir(Pilha *p){
  printf("\nO elemento  do topo da pilha Ã©  %d",p->v[p->topo]);
}

void liberar(Pilha *p){
  free(p);
}

