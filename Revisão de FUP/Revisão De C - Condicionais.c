//Revis�o de C - Parte 01 - Condicionais.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x = 0, y = 0, opcao = 0;
	int soma = 0, sub = 0, mult = 0;
	float div = 0;
	
	printf("Informe um valor: ");
	scanf("%d", &x);
	
	printf("Informe outro valor: ");
	scanf("%d", &y);
	
	soma = x + y;
	sub = x - y;
	div = x / y;
	mult = x * y;
	
	if(((x + y) % 2) == 0) printf("\nA soma dos valores informados � Par.");
	else printf("\nA soma dos valores informados � Impar.");
	
	printf("\n\n[ 1 ] Soma - [ 2 ] Subtra��o - [ 3 ] Multiplica��o - [ 4 ] Divis�o\n-- ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("\nSoma : %d", soma);
			break;
		case 2:
			printf("\nSubtra�ao : %d", sub);
			break;
		case 3:
			printf("\nMultiplica��o : %d", mult);
			break;
		case 4:
			printf("\nDivis�o : %f", div);
			break;
		default:
			printf("\nOp��o inv�lida.");
	}
	return 0;
} 
