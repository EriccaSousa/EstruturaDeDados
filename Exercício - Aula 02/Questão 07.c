/*
Exercício - Aula 2 - Estrutura de Dados
Questão 07:
Fazer um programa com uma função que recebe 2 parâmetros (x e y) e retorna o
resultado das 4 operações (soma, subtração, multiplicação e divisão). Utilize o
seguinte cabeçalho void calculadora(float x, float y, float *soma, float *sub,
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
	printf("\nSubtração : %.2f", sub);
	printf("\nMultiplicação : %.2f", mul);
	printf("\nDivisão : %.2f", div);
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
