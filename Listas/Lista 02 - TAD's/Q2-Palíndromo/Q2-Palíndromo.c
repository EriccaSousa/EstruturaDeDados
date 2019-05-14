/*
Um pal�ndromo � uma string cuja ordem reversa de caracteres revela a pr�pria string de base. 
Por exemplo, ana e radar s�o exemplos de pal�ndromos. 
Utilizando uma pilha construa uma fun��o que verifique se uma string de entrada � ou n�o um pal�ndromo. 
Receber um par�metro char s[] e fa�a compara��es com \0 para percorer o vetor de string at� o final. 
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>
#include "Pilha.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, tam = 0, cont = 0;
	char aux;
	char vet[tam];
	
	Pilha *pilha;
	Pilha *pilha_aux1;
	Pilha *pilha_aux2;
	
	pilha = criar();
	pilha_aux1 = criar();
	pilha_aux2 = criar();
	
	printf("\nQual o tamanho da palavra?\n- ");
	scanf("%d", &tam);
	
	//Lendo valores para 'pilha' e 'pilha_aux1";
	printf("Informe a palavra:\n");
	for(i = 0; i < tam; i++){
		scanf(" %s", &vet[i]);
		
		vet[i] = toupper(vet[i]);//Convertendo todos os caracteres lidos para letras mai�sculas;
		
		inserir(pilha, vet[i]);
		inserir(pilha_aux1, vet[i]);
	}
	
	//Invertendo 'pilha';
	for(i = 0; i < tam; i++){
		aux = remover(pilha);
		inserir(pilha_aux2, aux);
	}
	
	//Comparando valores de 'pilha_aux1' e 'pilha_aux2";
	for(i = 0; i < tam; i++){
		if(remover(pilha_aux1) == remover(pilha_aux2)){
			cont++;
		}
	}
	
	if(cont == tam){
		printf("\nA palavra informada � um pal�dromo!\n");
	}else{
		printf("\nA palavra informada n�o � um pal�ndromo!\n");
	}
	
	system("Pause");
	return 0;
}
