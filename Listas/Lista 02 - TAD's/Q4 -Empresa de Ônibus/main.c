#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#define N 10

int main(){
	int opcao = 0;
	
	Fila *fila_Prioritaria;
	Fila *fila_Geral;
	
	do{
		printf("\n- Menu -\n[ 1 ] Fila Prioritária\n[ 3 ] Fila Gera\n[ 3 ] Encerrar\n- ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				break;
			case 2:
				break;
			case 3:
				free(fila_Prioritaria);
				free(fila_Geral);
			default:
				printf("Opcao Inválida!");
		}
	}while(opcao != 3);
}
