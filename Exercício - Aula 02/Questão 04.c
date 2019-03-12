/*
Exercício - Aula 2 - Estrutura de Dados
Questão 04:
Faça um programa que preencha um vetor com seis números inteiros. Após
preencher o vetor, calcule e mostre:
o Os números pares digitados;
o A soma dos números pares digitados;
o Os números ímpares digitados;
o A quantidade de números ímpares digitados. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[6], vet_Par[6];
	int i = 0, soma = 0, cont = 0;
	
	printf("Preenchendo o vetor:\n");
	for(i = 0; i < 6; i++){
		printf("[%d] : ", i);
		scanf("%d", &vet[i]);
	}
	
	printf("\nNúmeros pares digitados : ");
	for(i = 0; i < 6; i++){
		if(vet[i] % 2 == 0){
			printf(" %d,", vet[i]);
			
			soma = soma + vet[i];
		} 
	}
	printf("\nSoma dos números pares informados : %d", soma);
	
	printf("\n\nNúmeros Ímpares digitados : ");
	for(i = 0; i < 6; i++){
		if(vet[i] % 2 != 0){
			cont++;
			printf(" %d,", vet[i]);
		} 
	}
	printf("\nQuantidade de números ímpares digitado : %d", cont);
	
	return 0;
}
