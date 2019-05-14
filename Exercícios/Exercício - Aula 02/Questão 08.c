/*
Exercício - Aula 2 - Estrutura de Dados
Questão 08:
Faça uma função que receba um valor inteiro como referência e retorne o resto
da divisão deste número por 10. Altere também o valor da variável passada por
referência, dividindo-a por 10.
*/

#include <stdio.h>
#include <locale.h>

void alteraValor(int num){
	setlocale(LC_ALL, "Portuguese");
	
	int mod = num % 10;
	int div = num / 10;
	
	printf("\nResultado da divisão por 10 : %d", div);
	printf("\nResto da divisão por 10 : %d", mod);
	
}

int main(){
	int a = 0;
	
	printf("Informe um valor : ");
	scanf("%d", &a);
	
	alteraValor(a);
	
	return 0;
}




