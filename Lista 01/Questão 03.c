/*
Lista 01 - Estrutura, ponteiro e recursividade.
Quest�o 03:
Construa uma fun��o que receba os vetores de inteiros L e Q e retorne a quantidade de
elementos que eles t�m em comum. Use o prot�tipo, int fnc(int L[], int n, int Q[], int m);
onde n e m s�o os comprimentos de L e Q respectivamente. 
*/
#include <stdio.h>

int fnc(int L[], int n, int Q[], int m){
	int i = 0, j = 0, cont = 0;
	
	printf("\nInforme os valores para o Vetor A:\n");
	for(i = 0; i < n; i++){
		printf("Informe um valor : ");
		scanf("%d", &L[i]);
	}
	printf("\nInforme os valores para o Vetor B:\n");
	for(i = 0; i < m; i++){
		printf("Informe um valor : ");
		scanf("%d", &Q[i]);
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(L[i] == Q[j]){
				cont++;
			}
		}
	}
	if (cont == 0){
    	printf("\nNenhum valor repetido.\n\n");
    }else{
    	printf("\nQuantidade de valores repetidos : %d", cont);
	}
}

int main(){
	int n = 0, m = 0;
	int vet_A[n], vet_B[m];
	
	printf("Informe o tamanho do Vetor A: ");
	scanf("%d", &n);
	printf("Informe o tamanho do Vetor B: ");
	scanf("%d", &m);
	
	fnc(vet_A,n,vet_B,m);
	return 0;
}
