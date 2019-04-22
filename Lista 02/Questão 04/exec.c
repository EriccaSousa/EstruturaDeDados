#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
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
	Pilha *auxP1;
	Pilha *auxP2;
	
	pilha_01 = criar();
	pilha_02 = criar();
	auxP1 = criar();
	auxP2 = criar();
	
	printf("Jogador 01 ");
	escolherNumeros(pilha_01);
	
	printf("Jogador 02 ");
	escolherNumeros(pilha_02);
	
	inverterPilhas(pilha_01, auxP1);
	inverterPilhas(pilha_02, auxP2);
	
	imprimir(auxP2);
	
	
	
	return 0;
}

void escolherNumeros(Pilha *p){
	int i;
	int num;
	
	printf("informe 5 números:\n");
	for(i = 0; i < 5; i++){
		printf("[ %d ] - ", i);
		scanf("%d", &num);
		inserir(p, num);
	}

}

void inverterPilhas(Pilha *p, Pilha *aux){
	int i;
	
	for(i = 0; i < 5; i++){
		aux = remover(p);
		inserir(p, aux);
	}
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
   if(vazia(p) == 1){ printf("A pilha está vazia, não é possivel fazer remoção");
    exit(1);
   }
   valor = p-> v[p->topo];
   p->topo = p->topo-1;
   return(valor); 
}

void imprimir(Pilha *p){
  printf("\nO elemento  do topo da pilha é  %d \n",p->v[p->topo]);
}

void liberar(Pilha *p){
  free(p);
}

