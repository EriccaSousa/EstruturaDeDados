#include <stdio.h>


void bubbleSort(int *v, int n){
    int i, j, temp;
    for(i = n - 1; i > 0; i--){
        for(j = 0; j < i; j++){
            if(v[j] > v[j+1]){
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main(){
	int i;
    int v[] = {9, 7, 2, 7, 5, 0, 15};
    
    bubbleSort(v, 7);

	printf("\t- BubbleSort -\n\n");
    printf("Vetor ordenado: ");
    for(i=0;i<7;i++){
        printf("[%d]", v[i]);
    }
}
