/*
Criar um programa que manipule uma pilha por meio de um menu de escolhas
(1-criar, 2-inserir, 3-remover, 4-consulta topo, 5- cheia, 6 vazia, 7-encerrar);
*/

#include <stdio.h>
#include "pilha.h"

int main(){
	int opcao, valor;
	Pilha *p;
	
	do{
		printf("\n[ 1 ] Criar Pilha\n[ 2 ] Inserir Valor\n[ 3 ] Remover Valor\n[ 4 ] Consultar Topo\n[ 5 ] Verificar se a pilha esta cheia\n[ 6 ] Verificar se a pilha esta vazia\n[ 7 ] Encerrar\n");
		printf("\nEscolha uma opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				p = criar();
				printf("Pilha inicializada com sucesso!\n");
				break;
			case 2:
				printf("Informe o valor a ser inserido na pilha: ");
				scanf("%d", &valor);
				
				inserir(p, valor);
				break;
			case 3:
				valor = remover(p);
				break;
			case 4:
				imprimir(p);
				break;
			case 5:
				if(vazia(p) == 1) printf("\nPilha vazia!\n");
				else("\nPilha cheia!");
				break;
			case 6:
				if(cheia(p) == 1) printf("\nPilha cheia!\n");
				else("\nPilha vazia!\n");
				break;
			case 7:
				liberar(p);
				printf("\nEcerrado com sucesso!\n");
				break;
			default:
				printf("\nOpcao invalida!\n");
		}	
	}while(opcao != 7);
	
	return 0;
}
