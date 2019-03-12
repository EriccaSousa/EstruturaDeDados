/*
Exerc�cio - Aula 2 - Estrutura de Dados
Quest�o 02:
Fa�a um programa que preencha um vetor com dez n�meros inteiros. Ap�s
preencher o vetor, busque e mostre os n�meros superiores a cinquenta e suas
respectivas posi��es. O programa dever� mostrar mensagem se n�o existir
nenhum n�mero nessa condi��o. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10];
	int i = 0;
	
	printf("Preenchendo vetor:\n");
	for(i = 0; i < 10; i++){
		printf("[%d] : ", i);
		scanf("%d", &vet[i]);
	}
	
	printf("Valores maiores que 50 do vetor:\n");
	for(i = 0; i < 10; i++){
		if(vet[i] > 50){
			printf("\n%d", vet[i]);
		}
		
	}
	
	return 0;
}
