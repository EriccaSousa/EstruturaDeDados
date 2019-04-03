#include <stdio.h>

void ordenacao_selecao(int *v, int n){
    int i, j, pos_min, min;
    
    for(i=0;i<n;i++){ //percorendo os elementos do vetor e ordenando a posição i.
        pos_min=i;
        for(j = i + 1;j < n; j++){
            if(v[j] < v[pos_min]){
            	pos_min = j;	
			}
        }
        //trocando valores entre pos_min e i
        min = v[pos_min];
        v[pos_min] = v[i];
        v[i]=min;
        
    }
}

int main(){
	int i=0;
    int v[5] = {5, 4, 3, 2, 1};
    
    ordenacao_selecao(v, 5);
    
    printf("\t- SelectionSort -\n\n");
    printf("Vetor ordenado: ");
    
    for(i=0;i<5;i++){
    	printf("[%d]", v[i]);
	}
    
    return 0;
}
