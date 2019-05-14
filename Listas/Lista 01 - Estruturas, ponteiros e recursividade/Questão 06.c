/*
Lista 01 - Estrutura, ponteiro e recursividade.
Questão 06:
Faça uma função recursiva que recebe um valor inteiro como parâmetro e retorna
1/0 para informar se o número é primo ou não
*/

#include <stdio.h>
#include <stdlib.h>

int funcPrimo(int num, int i){
	if((num % i == 0) && (num != 2)){
		return 0;
	}else if(i > (num / 2)){
		return 1;
	}else{
		return funcPrimo(num, i + 2);
	}
    
}

main(){
	int num = 0;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	if(funcPrimo(num, 2)){
		printf("1");
	}else{
		printf("0");
	}	 
}
