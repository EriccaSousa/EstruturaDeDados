#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "pilha.h"

typedef struct no{
	int valor;
	struct no *prox;
}No;

typedef struct pilha{
	No *topo;
	No *base;
	int qntElem;
}Pilha;

Pilha* criar(){
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	
	p->base = NULL;
	p->topo = NULL;
	p->qntElem = 0;
	
	return p;
}
	
int cheia(Pilha *p){
	return 0;
}

int vazia(Pilha *p){
	if(p->topo == NULL) return 1;
	else return 0;
}

void imprimir(Pilha *p){
	printf("%d", p->topo->valor);
}

void liberar(Pilha *p){
	free(p);
}

void inserir(Pilha *p, int valor){
	p->base = (No*) malloc(sizeof(No));
	p->topo = p->base;
	p->base->valor = valor;
	p->base->prox = NULL;
	
}

int remover(Pilha *p){
	int valor = 0;
	
	if(p->topo == NULL){
		printf("\nPilha vazia!\n");
	}else{
		No *n = p->topo;
		
		while(n != NULL){
			No *temp = n->prox;
			free(n);
			n = temp;
		}
		free(p);
	}
	return valor;
}



