/*
Exerc�cio - Aula 2 - Estrutura de Dados
Quest�o 07:
Fazer um programa com uma fun��o que recebe 2 par�metros (x e y) e retorna o
resultado das 4 opera��es (soma, subtra��o, multiplica��o e divis�o). Utilize o
seguinte cabe�alho void calculadora(float x, float y, float *soma, float *sub,
float *mul, float*div);
*/

#include <stdio.h>
#include <locale.h>

void calculadora(float x, float y, float soma, float sub, float mul, float div){
	setlocale(LC_ALL, "Portuguese");
	
	soma = x + y;
	sub = x - y;
	mul = x * y;
	div = x / y;
	
	printf("\nSoma : %.2f", soma);
	printf("\nSubtra��o : %.2f", sub);
	printf("\nMultiplica��o : %.2f", mul);
	printf("\nDivis�o : %.2f", div);
}

int main(){
	float num_1 = 0, num_2 = 0;
	float soma, sub, mul, div;
	
	printf("Informe dois valores:\n-- ");
	scanf("%f", &num_1);
	printf("-- ");
	scanf("%f", &num_2);
	
	calculadora(num_1, num_2, soma, sub, mul, div);
	
	return 0;
}
