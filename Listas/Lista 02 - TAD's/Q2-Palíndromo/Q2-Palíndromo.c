/*
Um palíndromo é uma string cuja ordem reversa de caracteres revela a própria string de base. 
Por exemplo, ana e radar são exemplos de palíndromos. 
Utilizando uma pilha construa uma função que verifique se uma string de entrada é ou não um palíndromo. 
Receber um parâmetro char s[] e faça comparações com \0 para percorer o vetor de string até o final. 
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "Pilha.h"


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, tam = 0, cont = 0;
	char letra;
	char palavra[100];
	
	Pilha *pilha;
	Pilha *pilha_aux1;
	Pilha *pilha_aux2;
	
	pilha = criar();
	pilha_aux1 = criar();
	pilha_aux2 = criar();
	
	printf("Informe a palavra: ");
	scanf(" %s", &palavra);
	
	tam = strlen(palavra);
	
	printf("\nPalavra informada: ");
	while(i < tam){
		palavra[i] = toupper(palavra[i]);
		
		printf("%c", palavra[i]);
		
		inserir(pilha, palavra[i]);
		inserir(pilha_aux1, palavra[i]);
		
		i++;
	}
	
	for(i = 0; i < tam; i++){
		inserir(pilha_aux2, remover(pilha_aux1));
	}
	
	for(i = 0; i < tam; i++){
		if(remover(pilha) == remover(pilha_aux2)){
			cont++;
		}
	}
	
	
	if(cont == tam){
		printf("\nA palavra informada é um palídromo!\n");
	}else{
		printf("\nA palavra informada não é um palíndromo!\n");
	}
	
	
	printf("\n");
	
	system("pause");
	return 0;
}
