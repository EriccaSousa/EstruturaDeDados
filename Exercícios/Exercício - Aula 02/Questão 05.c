/*
Exerc�cio - Aula 2 - Estrutura de Dados
Quest�o 05:
Fa�a um programa que leia um vetor com cinco posi��es para n�meros reais e,
depois, um c�digo inteiro. Se o c�digo for zero, finalize o programa; se for 1,
mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet[5];
	int i = 0, codigo = 0;
	
	printf("Preenchendo o vetor:\n");
	for(i = 0; i < 5; i++){
		printf("[%d] : ", i);
		scanf("%d", &vet[i]);
	}
	
	printf("\n[ 1 ] Mostrar Vetor\n[ 2 ] Mostrar vetor na ordem inversa\n[ 0 ] Sair\n-- ");
	
	do{
		scanf("%d", &codigo);
		if(codigo == 1){
			printf("\nVetor : ");
			for(i = 0; i < 5; i++){
				printf(" %d,", vet[i]);
			}
		} else if(codigo == 2){
			printf("\nOrdem inversa do vetor informado : ");
			for(i = 5; i >= 0; i--){
				printf(" %d,", vet[i]);
			}
		} else if(codigo == 0){
			exit(0);
		}else{
			printf("\nOp��o inv�lida!\nTente novamente.\n\n-- ");
			codigo = 3;
		}	
	}while(codigo == 3);

	
	return 0;
}
