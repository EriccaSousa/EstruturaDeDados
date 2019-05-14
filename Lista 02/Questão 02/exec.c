#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pilha.h"

int main(){
	setlocale(LC_ALL, "Portuguese");

	Pilha *pilha_01;
	Pilha *pilha_02;
	
	pilha_01 = criar();
	pilha_02 = criar();
	
	int i, valor, tam, iguais;
	
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
	
	cont  = 0;
	for(i = 0; i < tam; i++){
		if(remover(pilha_01) != remover(pilha_02)){
			iguais = 0;
		}
	}
	
	if(iguais != 0){
		printf("Pilha 01 e Pilha 02 são iguais!");
	}else{
		printf("Pilhas diferentes");
	}

	system("pause");
	return 0;
}
