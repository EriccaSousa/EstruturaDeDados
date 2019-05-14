#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define Max 3

typedef struct {
	char nome[50];
	char endereco[50];
	char telefone[55];
} Pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");

	Pessoa pessoa[Max];
	Pessoa aux[Max];
	int i = 0, j = 0;

	
	for(i = 0; i < Max; i++) {
		printf("\nDigite o nome: ");
	    fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin);
	    strupr(pessoa[i].nome); //converter a string para letras maisculas.

	    printf("Digite o endereço: ");
	    fgets(pessoa[i].endereco, sizeof(pessoa[i].endereco), stdin);

	    printf("Digite o telefone: ");
	    fgets(pessoa[i].telefone, sizeof(pessoa[i].telefone), stdin);
	    fflush(stdin);
	}
	
	for(i = 0; i < Max; i++) {
		for(j = i+1; j < Max; j++) {
			if(strcmp(pessoa[i].nome,pessoa[j].nome) == 1 ) { 
				strcpy(aux[i].nome,pessoa[i].nome);
				strcpy(aux[i].endereco,pessoa[i].endereco);
				strcpy(aux[i].telefone,pessoa[i].telefone);
							
				strcpy(pessoa[i].nome,pessoa[j].nome);
				strcpy(pessoa[i].endereco,pessoa[j].endereco);
				strcpy(pessoa[i].telefone,pessoa[j].telefone);
							
				strcpy(pessoa[j].nome,aux[i].nome);
				strcpy(pessoa[j].endereco,aux[i].endereco);
				strcpy(pessoa[j].telefone,aux[i].telefone);
			}
		}
	}
			
	for(i = 0; i < Max; i++) {
		printf("\nNome: %sEndereco: %sTelefone: %s", pessoa[i].nome, pessoa[i].endereco, pessoa[i].telefone);
	}

	return 0;
}
