/*
Lista 01 - Estrutura, ponteiro e recursividade.
Questão 01:
Declare uma estrutura C capaz de guardar os seguintes dados relativos a um prontuário
médico (declare duas variáveis do tipo desta estrutura):
a) Nome do paciente (string de 50)
b) Endereço (string de 50)
c) Telefone (string de 8)
d) Altura (float)
e) Data de nascimento (string de 8)
f) Peso (float)
Declare um novo tipo C chamado Paciente que deve ser exatamente a estrutura acima.  
*/
#include <stdio.h>
#include <malloc.h>
#include <locale.h>

typedef struct {
	char nome[50];
	char endereco[50];
	char telefone[8];
	float altura;
	char data_nasc[8];	
	float peso;
} Prontuario;

typedef struct {
	char nome[50];
	char endereco[50];
	char telefone[8];
	float altura;
	char data_nasc[8];	
	float peso;
} Paciente;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0;
	
	Prontuario prontuario_01;
	Prontuario prontuario_02;
	Paciente paciente;
	
	for(i = 0; i <=2; i++){
		printf("\nInformações do paciente\nNome : ");
		fgets(prontuario_01.nome, sizeof(prontuario_01.nome), stdin);
		
		printf("Endereço : ");
		fgets(prontuario_01.endereco, sizeof(prontuario_01), stdin);
		
		printf("Telefone : ");
		fgets(prontuario_01.telefone, sizeof(prontuario_01), stdin);
		
		printf("Altura : ");
		scanf("%f", &prontuario_01.altura);
		fflush(stdin);
		
		printf("Data de nascimento : ");
		fgets(prontuario_01.data_nasc, sizeof(prontuario_01), stdin);
		
		printf("Peso : ");
		scanf("%.2f", &prontuario_01.peso);
		fflush(stdin);
	}
	
	for(i=0; i <=3; i++){
		printf("Prontuario: \n%s\n%s\n%s\n%.2f\n%s\n%.2f", prontuario_01.nome, prontuario_01.endereco, prontuario_01.telefone, prontuario_01.altura, prontuario_01.data_nasc, prontuario_01.peso);
	}
	
	
	
	return 0;
}
