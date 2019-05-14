/*
Lista 02 - Questões de uso de Pilha

01) Criar um programa que manipule uma pilha por meio de um menu de escolhas
(1-criar, 2-inserir, 3-remover, 4-consulta topo, 5- cheia, 6 vazia, 7-encerrar);

*/

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int menu(Pilha *p, int opcao){
	printf("MENU:");
	printf("\n[ 1 ] Criar\n[ 2 ] Inserir\n[ 3 ] Remover\n[ 4 ] Consultar\n[ 5 ] Verificar se a Pilha esta cheia\n[ 6 ] Verificar se a pilha esta vazia\n[ 7 ] Encerrar\n");
	printf("Ecolha um aopcao: ");
	scanf("%d", &opcao);
	
	do{
		switch(opcao){
			case 1:
				criar(p);
				break;
			case 2:
				inserir(p, 2);	
				break;
			case 3:
				remover(p);
				break;
			case 4:
				imprimir(p);
				break;
			case 5:
				cheia(p);
				break;
			case 6:
				vazia(p);
				break;
			case 7:
				free(p);
				exit(0);
			default:
				printf("Comando invalido!\n");
		}
		
	}while(opcao);
}
