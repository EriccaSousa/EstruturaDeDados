/*
Exerc�cio - Aula 2 - Estrutura de Dados
Quest�o 06:
Programa com fun��o que recebe dois par�metros passados por refer�ncia e
atualiza os valores com 20%.
*/

#include <stdio.h>

void atualizaValor(double val_1, double val_2){
	val_1 = val_1 + (val_1 * 0.2);
	val_2 = val_2 + (val_2 * 0.2);
	
	printf("\nValor 1 : %.2lf", val_1);
	printf("\nValor 2 : %.2lf", val_2);
}

int main(){
	double a = 0, b = 0;
	
	printf("Infome um valor : ");
	scanf("%lf", &a);
	
	printf("Informe outro valor : ");
	scanf("%lf", &b);
	
	atualizaValor(a,b);
	
	return 0;
}



