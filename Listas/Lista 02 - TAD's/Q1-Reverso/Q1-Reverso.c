/*
O reverso de um número natural é outro natural obtido pela inversão de seus dígitos.
Por exemplo, o reverso de 54132 é 23145. 
Escreva algoritmo que receba um natural e, utilizando uma pilha, retorne ser reverso. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Pilha.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, tam = 0, aux = 0;
	int vet[tam];
	
	Pilha *pilha;
	Pilha *pilha_aux;
	
	pilha = criar();
	pilha_aux = criar();
	
	printf("\nQual o tamanho deseja para sua pilha?\n- ");
	scanf("%d", &tam);
	
	//Lendo valores para 'pilha';
	printf("\nInforme os valores para a pilha:\n");
	for(i = 0; i < tam; i++){
		printf("[%d] - ", i);
		scanf("%d", &vet[i]);
		
		inserir(pilha, vet[i]);
	}
	
	printf("\nPilha reversa: ");
	for(i = 0; i < tam; i++){
		imprimir(pilha);
		aux = remover(pilha);
		inserir(pilha_aux, aux);
	}
	
	printf("\nPilha informada: ");
	for(i = 0; i < tam; i++){
		imprimir(pilha_aux);
		remover(pilha_aux);
	}
	printf("\n");
	
	system("Pause");
	return 0;	
}
