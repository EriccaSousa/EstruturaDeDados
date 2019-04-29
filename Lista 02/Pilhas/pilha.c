#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define TAM 100

struct pilha{
	int vet[TAM];
	int topo;//Esta variavel indica em que posicao do vetor esta o TOPO da PILHA;
};

Pilha* iniciaPilha(){
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p->topo = -1;//-1 indica que a pilha esta vazia;
	
	return p;
}

int verificaVazia(Pilha *p){
	if(p->topo == -1) return 1;
	else return 0; 
}

int verificaCheia(Pilha *p){
	if(p->topo == TAM-1) return 1;
	else return 0;
}

int inserePilha(Pilha *p, int valor){
	if(verificaCheia(p) == 1){
		printf("ERRO!\n A pilha ja esta cheia");
	}else{
		p->topo++;//Incrementa o TOPO em uma posicao;
		p->vet[p->topo] = valor;//O novo valor passa ser TOPO da Pilha;
	}
	
	return valor;
}

int removePilha(Pilha *p){
	int aux;
	
	if(verificaVazia(p) == 1){
		printf("ERRO!\n A pilha ja esta vazia.");
	}else{
		aux = p->vet[p->topo];//aux recebe TOPO;
		p->topo--;//TOPO e decrementado, assim assumindo um novo valor;
	}
	
	return aux;
	
}

void imprimirPilha(Pilha *p){
  printf("\nO elemento  do topo da pilha é  %d",p->vet[p->topo]);
}

void liberarPilha(Pilha *p){
  free(p);
}
	
