#include <stdio.h>

void selectionSort(int *vet, int inicio, int fim){
	int i, j, menorPosicao, menorValor;

	if(inicio > fim){
		menorPosicao = inicio;
		for(j = i+1; j < fim; j++){
			if(vet[j] > vet[menorPosicao]){
				menorPosicao = j;
			}
			menorValor = vet[menorPosicao];
			vet[menorPosicao] = vet[i];
			vet[i] = menorValor;
			selectionSort(vet, inicio, fim);
			
			menorPosicao++;
		}
	}	
}

int main(){
	int i=0;
	int inicio, fim;
    int v[5] = {5, 4, 3, 2, 1};
    
    selectionSort(v, inicio, fim);
    
    printf("\t- SelectionSort -\n\n");
    printf("Vetor ordenado: ");
    
    for(i=0;i<5;i++){
    	printf("[%d]", v[i]);
	}
    
    return 0;
}
