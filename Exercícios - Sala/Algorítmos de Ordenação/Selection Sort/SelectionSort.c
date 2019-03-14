#include <stdio.h>
#include <locale.h>

void selection_sort(int v[], int tam){
    int i, j, aux, menor;
    
    for(i = 0; i < tam; i++){
        menor = i;
        for(j = i+1; j < tam; j++){
            if(v[j] < v[menor]){
            	menor = j;
			} 
        }
        if(i != menor){
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
}
 
main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, tam; 
	int vet[tam];
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tam);
	
    printf("Preenchendo vetor:\n");
	for(i = 0; i < tam; i++){
		printf("[%d] : ", i);
		scanf("%d", &vet[i]);
	}
	
	printf("\nOdem informada para o vetor: ");
	for(i = 0; i < tam; i++){
		printf("[%d]", vet[i]);
	}
	
    selection_sort(vet, tam);
    
    printf("\n\nVetor ordenado: ");
    for(i = 0; i < tam; i++){
    	printf("[%d]", vet[i]);
	}
    
    return 0;
}
