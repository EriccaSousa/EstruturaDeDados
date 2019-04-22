#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam, i, valor, aux, iguais;
	
	Pilha *pilha_01;
	Pilha *pilha_02;
	Pilha *pilhaAux;
	
	pilha_01 = criar();
	pilha_02 = criar();
	pilhaAux = criar();
	
	printf("Informe o tamanho das pilhas: ");
	scanf("%d", &tam);
	
	//Preenchendo pilha_01;
	printf("Informe os valores para a pilha 01:\n");
	for(i = 0; i < tam; i++){
		printf("[ %d ] - ", i);
		scanf("%d", &valor);
		inserir(pilha_01, valor);
	}
	
	//Preenchenco pilha_02;
	printf("Informe os valores para a pilha 02:\n");
	for(i = 0; i < tam; i++){
		printf("[ %d ] - ", i);
		scanf("%d", &valor);
		inserir(pilha_02, valor);
	}
	
	/*
	- Mandando valores da pilha_02 para uma pilha auxiliar;
	- Dessa forma é possível inverter a pilha_02;
	*/
	for(i = 0; i < tam; i++){
		aux = remover(pilha_02);
		inserir(pilhaAux, aux);
	}
	
	/*
	- Verificando se as Pilha 01 e Aux são iguais;
	- Se sim, como pilhaAux é inversa a pilha_02, as pilhas 01 e 02 são inversamente iguais.
	*/
	for(i = 0; i < tam; i++){
		if(remover(pilha_01) != remover(pilhaAux)){
			iguais = 0;
		}else{
			iguais = 1;
		}
	}
	
	if(iguais != 0){
		printf("\nAs pilhas 01 e 02 são inversamente iguais!\n");
	}else{
		printf("\nAs pilhas 01 e 02 são inversamente diferentes!\n");
	}
	
	system("pause");
	return 0;
}
