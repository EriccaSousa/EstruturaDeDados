#include <stdio.h>
  
int main () {
	int p = 999;
    int q = 555;
    
    printf("Valores antes da troca\np : %d", p);
    printf("\nq : %d", q);
    
    int aux = p;   
	p = q;   
	q = aux;
	
	printf("\n\nValores depois da troca\nValor de p : %d", p);
	printf("\nValor de q : %d", q);  

    return 0;
} 
