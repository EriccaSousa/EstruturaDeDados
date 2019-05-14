#include <stdio.h>

void merge(int *v, int inicio, int meio, int fim){
	int tamVet_1 = meio - inicio + 1;
	int tamVet_2 = fim - meio;
	
	int vetAux_1[tamVet_1], vetAux_2[tamVet_2];
	int i, j, k;
	
	for(i = 0; i < tamVet_1; i++){
		vetAux_1[i] = v[i + inicio];
	}
	for(j = 0; j < tamVet_2; j++){
		vetAux_2[j] = v[j + meio + 1];
	}
	
	i = j = 0;
	k = inicio;
	
	while(i < tamVet_1 && j < tamVet_2){
		if(vetAux_1[i] < vetAux_2[j]){
			v[k] = vetAux_1[i++];
		}else{
			v[k] = vetAux_2[j++];
		}
		k++;
	}
	
	while(i < tamVet_1){
		v[k] = vetAux_1[i++];
	}
	while(j < tamVet_2){
		v[k] = vetAux_2[j++];
	}
	
}

void mergeSort(int *v, int inicio, int fim){
	if(inicio < fim){
		int meio = ((inicio + fim) / 2);
		mergeSort(v, inicio, meio);
		mergeSort(v, meio+1, fim);
		merge(v, inicio, meio, fim);
	}
	
}
int main() {
	int i;
    int v[] = {5, 2, 8, 5, 9, 1, 4};
    
   	mergeSort(v, 0, 6);
  
	for (i = 0; i < 7; i++)
	    printf(" %d ", v[i]);
	return 0;
}
