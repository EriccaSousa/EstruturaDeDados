/*
 Fila - Lista 03
 - Questão 01:
 - Adaptar o TAD fila para trabalhar somente com um vetor de inteiros e a quantidade de
	elementos.
 */
 
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#define N 10

struct fila{
	int v[N];
	int qtd_Elementos;
};

Fila* criar(){
	Fila *f = (Fila*) malloc(sizeof(Fila));
    f->qtd_Elementos = 0
    
    return(f);
}

int cheia(Fila *f){
   if(f->qtd_Elementos == N) return 1;
   else return(0);
}

void inserir(Fila *f){
	int i;
	
	if(cheia(f)){
	   printf("\nA fila está cheia\n");
	}else{
		printf("\nInforme os valores da Fila:\n");
		for(i = 0; i < qtd_Elementos; i++){
			printf("[ %d ] - ", i);
			scanf("%d", f->v[i]);
			
			f->qtd_Elementos = f->qtd_Elementos + 1;
		}
    }
}

int vazia(Fila *f){
  if(f->qtd_Elementos == 0) return 1;
  else return 0;
}

int remover(Fila *f){
   int i;
   if(vazia(f)){
	   printf("A fila está vazia, não é possivel fazer remoção");
	   
	   exit(1);
	}
	for(i = 1; i < qtd_Elementos; i++){
        f->v[i-1] = f->v[i];
		f->qtd_Elementos = f->qtd_Elementos - 1;
	}
	return(qtd_Elementos); 
}

void imprimir(Fila *f){
    
    if(!vazia(f))
        printf("\nO elemento  do inicio da Fila é %d", f->v[N]);
}

void liberar(Fila *f){
  free(f);
}
