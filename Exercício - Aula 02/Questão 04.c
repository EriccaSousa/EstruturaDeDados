/*
Exerc�cio - Aula 2 - Estrutura de Dados
Quest�o 04:
Fa�a um programa que preencha um vetor com seis n�meros inteiros. Ap�s
preencher o vetor, calcule e mostre:
o Os n�meros pares digitados;
o A soma dos n�meros pares digitados;
o Os n�meros �mpares digitados;
o A quantidade de n�meros �mpares digitados. 
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
	
	printf("\nN�meros pares digitados : ");
	for(i = 0; i < 6; i++){
		if(vet[i] % 2 == 0){
			printf(" %d,", vet[i]);
			
			soma = soma + vet[i];
		} 
	}
	printf("\nSoma dos n�meros pares informados : %d", soma);
	
	printf("\n\nN�meros �mpares digitados : ");
	for(i = 0; i < 6; i++){
		if(vet[i] % 2 != 0){
			cont++;
			printf(" %d,", vet[i]);
		} 
	}
	printf("\nQuantidade de n�meros �mpares digitado : %d", cont);
	
	return 0;
}
