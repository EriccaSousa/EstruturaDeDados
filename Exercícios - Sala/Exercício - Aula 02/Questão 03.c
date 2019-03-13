/*
Exercício - Aula 2 - Estrutura de Dados
Questão 03:
Faça um programa que preencha um vetor de tamanho oito com números
inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor deve conter
os números pares; o segundo deve conter os números ímpares. Cada vetor
resultante vai ter tamanho oito. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[8], vet_Par[8], vet_Impar[8];
	int i = 0;
	
	printf("Preenchendo vetor:\n");
	for(i = 0; i < 8; i++){
		printf("[%d] : ", i);
		scanf("%d", &vet[i]);
	}
	
	//Preenchendo vet_Par;
	printf("\nVetor com números pares   : ");
	for(i = 0; i < 8; i++){
		if(vet[i] % 2 == 0){
			vet_Par[i] = vet[i];
			printf(" %d,", vet_Par[i]);
		}
	}
	
	//Preenchendo vet_Impar;
	printf("\nVetor com números ímpares : ");
	for(i = 0; i < 8; i++){
		if(vet[i] % 2 != 0){
			vet_Impar[i] = vet[i];
			printf(" %d,", vet_Impar[i]);
		}
	}
	
	return 0;
}
