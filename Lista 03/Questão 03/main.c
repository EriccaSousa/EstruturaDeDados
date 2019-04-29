/*
 Fila - Lista 03
 - Questão 03
 - Criar um programa que manipule uma fila por meio de um menu de escolhas (1-criar, 2-
	inserir, 3-remover, 4-consulta inicio, 5- cheia, 6 vazia, 7-encerrar);
*/

#include <stdio.h>
#include <locale.h>
#include "fila.h"

int main(){
	
	return 0;
}

void menu(){
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, valor;
	Fila *f;
	
	do{
		printf("\n- Menu Fila -\n");
		printf("[ 1 ] Cria\n[ 2 ] Inserir\n[ 3 ] Remover\n[ 4 ] Consultar Início\n[ 5 ] Verificar se está cheia\n[ 6 ] Verificar se está vazia\n[ 7 ] Encerrar\n\n-- ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				f = criar();
				printf("\nFila inicializada com sucesso!\n");
				break;
			case 2:
				inserir(f,valor);
				printf("\nInseção realizada com sucesso\n");
				break;
			case 3:
				remover(f);
				printf("\nRemoção realizada com sucesso!\n");
				break;
			case 4:
				imprimir(f);
				break;
			case 5:
				cheia(f);
				break;
			case 6:
				vazia(f);
				break;
			case 7:
				liberar(f);
				printf("\nFila encerrada com sucesso!\n");
				break;
			default:
				printf("\nOpção inválida!\n");
		}
		
	}while(opcao != 7); 
}
