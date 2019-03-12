/*
Lista 01 - Estrutura, ponteiro e recursividade.
Questão 04:
Uma função de troca é aquela capaz de trocar os dados entre duas variáveis de mesmo
tipo. Implemente a função de troca dado que o protótipo em C é void Swap(int *p, int
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
