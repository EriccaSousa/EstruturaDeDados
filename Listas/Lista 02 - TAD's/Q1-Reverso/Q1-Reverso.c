/*
O reverso de um n�mero natural � outro natural obtido pela invers�o de seus d�gitos.
Por exemplo, o reverso de 54132 � 23145. 
Escreva algoritmo que receba um natural e, utilizando uma pilha, retorne ser reverso. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Pilha.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, aux1 = 0, aux2 = 0, num = 0;
	
	Pilha *pilha;
	Pilha *pilha_aux;
	
	pilha = criar();
	pilha_aux = criar();
	
	printf("\nInforme um n�mero natural: ");
	scanf("%d", &num);
	
	printf("\nN�mero informado: %d", num);
	
	do{
		aux1 = num % 10;
		num = num / 10;
		
		inserir(pilha, aux1);
	}while(num > 0);
	
	do{
		aux2 = remover(pilha);
		inserir(pilha_aux, aux2);
	}while(!vazia(pilha));
	
	printf("\nReverso do n�mero informado: ");
	do{
		imprimir(pilha_aux);
		remover(pilha_aux);
	}while(!vazia(pilha_aux));
	
	printf("\n");
	
	system("Pause");
	return 0;	
}


