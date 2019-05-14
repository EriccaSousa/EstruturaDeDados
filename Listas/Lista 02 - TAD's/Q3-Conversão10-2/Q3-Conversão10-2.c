#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Pilha.h"

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0, resto = 0;
	
	Pilha *pilha;
	
	pilha = criar();
	
	printf("Informe o número na base 10: ");
	scanf("%d", &num);
	
	while(num > 0){
		resto = num % 2;
		
		inserir(pilha, resto);
		
		num = num / 2;
	}
	
	do{
		imprimir(pilha);
		remover(pilha);
	}while(!vazia(pilha));
	
	printf("\n");

	system("Pause");
	return 0;
}
