#include <stdio.h>

void insertionSort(int *vet, int n){
	int i, j, aux;
	
	for(i = 1; i < n; i++){
		aux = vet[i];
		for(j = i -1; j >= 0; j--){
			if(vet[j] > aux){
				vet[j + 1] = vet[j];
			}else{
				break;
			}
		}
		vet[j + 1] = aux;
	}
}

int main(){
	int i;
	int v[] = {9, 7, 2, 7, 5, 0, 15, 1, 5, 0};
	
    insertionSort(v, 10);
    
    printf("\t- InsertionSort -\n\n");
    printf("Vetor ordenado: ");
    
    for(i = 0;i < 10;i++){
        printf("[%d]", v[i]);
	}
}
