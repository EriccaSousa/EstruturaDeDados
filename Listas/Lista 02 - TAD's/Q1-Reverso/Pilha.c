#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

#define N 20

struct pilha{
	int v[N];
	int topo;
};

Pilha* criar(){
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p->topo = -1;
	
	return(p);
}

int cheia(Pilha *p){
	if(p->topo == N-1){
		return 1;	
	}else{
		return 0;	
	}
}

int vazia(Pilha *p){
	if(p->topo == -1){
		return 1;
	}else{
		return 0;
	}
}

void inserir(Pilha *p, int valor){
	if(cheia(p)){
		printf("\nImpossível inserir!\nPilha Cheia.\n");
	}else{
		p->topo = p->topo+1;
		p->v[p->topo] = valor;
	}
}

int remover(Pilha *p){
	int valor;
	
	if(vazia(p)){
		printf("\nImpossível remover!\nPilha vazia.\n");
	}else{
		valor = p->v[p->topo];
		p->topo = p->topo-1;
		
		return valor;
	}
}

void imprimir(Pilha *p){
	printf("%d", p->v[p->topo]);
}

void liberar(Pilha *p){
	free(p);
}
