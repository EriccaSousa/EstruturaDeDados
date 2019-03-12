/*
Exercício - Aula 2 - Estrutura de Dados
Questão 02:
Faça um programa que preencha um vetor com dez números inteiros. Após
preencher o vetor, busque e mostre os números superiores a cinquenta e suas
respectivas posições. O programa deverá mostrar mensagem se não existir
nenhum número nessa condição. 
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
