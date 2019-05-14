/*
Exercício - Aula 2 - Estrutura de Dados
Questão 01: 
Faça um programa que preencha dois vetores de tamanho 10. Em seguida,
calcule a soma de cada elemento do vetor 1 com o elemento da respectiva
posição do vetor 2 e coloque no vetor3. Ou seja, vetor3[0] = vetor1[0] +
vetor2[0] e vetor3[1] = vetor1[1] + vetor2[1] e vetor3[2] = vetor1[2] +
vetor2[2]. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet_A[10], vet_B[10], vet_C[10];
	int i = 0, j = 0, l = 0;
	
	printf("Preenchendo vetor A:\n");
	for(i = 0; i < 10; i++){
		printf("[%d] : ", i);
		scanf("%d", &vet_A[i]);
	}
	
	printf("\nPreenchendo vetor B:\n");
	for(j = 0; j < 10; j++){
		printf("[%d] : ", j);
		scanf("%d", &vet_B[j]);
	}
	
	for(l = 0; l < 10; l++){
		vet_C[l] = (vet_A[l] + vet_B[l]);
	}
	
	//Imprimindo elementos do vet_C;
	printf("\nVetor C:");
	for(i = 0; i < 10; i++){
		printf(" %d, ", vet_C[i]);
	}
	
	return 0;
}
