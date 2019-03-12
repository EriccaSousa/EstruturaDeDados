/*
Lista 01 - Estrutura, ponteiro e recursividade.
Quest�o 04:
Uma fun��o de troca � aquela capaz de trocar os dados entre duas vari�veis de mesmo
tipo. Implemente a fun��o de troca dado que o prot�tipo em C � void Swap(int *p, int
*q);
*/

#include <stdio.h>

void Swap(int *p, int *q)  {
	int aux = 0;  
	
	aux = *p;   
	*p = *q;   
	*q = aux;
	
	printf("\n\nValores depois da troca\nP : %d", *p);
	printf("\nQ : %d", *q);    
}  
  
int main () {
	int p = 0;
    int q = 0;
    
    printf("Informe um valor para P : ");
    scanf("%d", &p);
	printf("Informe um valor para Q : ");
	scanf("%d", &q);    
    
    printf("\nValores antes da troca\nP : %d", p);
    printf("\nQ : %d", q);

    Swap(&p, &q);
    
    return 0;
} 
