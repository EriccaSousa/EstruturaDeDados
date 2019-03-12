/*
Lista 01 - Estrutura, ponteiro e recursividade.
Quest�o 05:
Fazer uma fun��o recursiva que fa�a a potencia��o na base 2. Receber o expoente e
retornar o resultado.
*/

#include <stdio.h>

int potencia(int base, int expoente){

 if(expoente == 0){
 	return 1;
 }else{
 	return (2 * potencia(2, expoente - 1));
 } 
 
}
int main(){
 int expoente = 0 , resultado = 0;
 
 printf("Digite o expoente : ");
 scanf("%d", &expoente);
 
 resultado = potencia(2, expoente);
 
 printf("\n2 elevado a %d = %d", expoente, resultado);
 
 return 0;
}
