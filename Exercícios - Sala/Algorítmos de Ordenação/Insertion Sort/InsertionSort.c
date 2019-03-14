#include <stdio.h>
#include <locale.h>

void insertion_Sort(int vet[], int tam){    
  int i, j, aux; 
 
  for(i = 1; i < tam; i++){ 
    j = i; 
    while((j > 0) && (vet[j - 1] > vet[j])) { 
      aux = vet[j]; 
      vet[j] = vet[j - 1]; 
      vet[j - 1] = aux; 
      j--;     
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
	
	insertion_Sort(vet, tam);
	
	printf("\n\nVetor ordenado: ");
    for(i = 0; i < tam; i++){
    	printf("[%d]", vet[i]);
	}
}
