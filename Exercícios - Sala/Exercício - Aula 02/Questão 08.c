/*
Exerc�cio - Aula 2 - Estrutura de Dados
Quest�o 08:
Fa�a uma fun��o que receba um valor inteiro como refer�ncia e retorne o resto
da divis�o deste n�mero por 10. Altere tamb�m o valor da vari�vel passada por
refer�ncia, dividindo-a por 10.
*/

#include <stdio.h>
#include <locale.h>

void alteraValor(int num){
	setlocale(LC_ALL, "Portuguese");
	
	int mod = num % 10;
	int div = num / 10;
	
	printf("\nResultado da divis�o por 10 : %d", div);
	printf("\nResto da divis�o por 10 : %d", mod);
	
}

int main(){
	int a = 0;
	
	printf("Informe um valor : ");
	scanf("%d", &a);
	
	alteraValor(a);
	
	return 0;
}




