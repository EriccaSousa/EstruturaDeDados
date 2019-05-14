#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

#define N 10

struct lista{
   amigos [N];
   int qtd_elem;
};

int main(){
	int opcao = 0, pos = 0, ord = 0;
	Lista *l;
	
	do{
		printf("\n[ 1 ] Criar lista\n[ 2 ] Inserir Dados\n[ 3 ] Remover Dados\n[ 4 ] Consultar Dados\n[ 5 ] Verificar se a lista esta cheia\n[ 6 ] Verificar se a lista esta vazia\n[ 7 ] Encerrar\n");
		printf("\nEscolha uma opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				Printf("Informe o ord: ");
				scanf("%d", &ord);
				
				l = criar();
				printf("Lista inicializada com sucesso!\n");
				break;
			case 2:
				printf("Informe a posição da lista a ser inserido os dados: ");
				scanf("%d", &pos);
				
				inserir(l, pos);
				break;
			case 3:
				remover(l);
				break;
			case 4:
				imprimir(l);
				break;
			case 5:
				if(vazia(l) == 1) printf("\nLista vazia!\n");
				else("\nLista cheia!");
				break;
			case 6:
				if(cheia(l) == 1) printf("\nLista cheia!\n");
				else("\nLista vazia!\n");
				break;
			case 7:
				liberar(p);
				printf("\nEcerrado com sucesso!\n");
				break;
			default:
				printf("\nOpcao invalida!\n");
		}	
	}while(opcao != 7);
	
}

Lista* criar(){
   Lista *l = (Lista*) malloc(sizeof(Lista));
   l->qtd_elem = 0;
   return(l);
}

int cheia(Lista *l){
   if(l->qtd_elem == N) return 1;
   else return(0);
}

void inserir(Lista *l, int pos){
   int i;
   if(cheia(l)) printf("A lista está cheia");
   else if(pos > l->qtd_elem || pos<0) printf("A posição da inserção é inválida");
        else{
          i = l->qtd_elem;
          while(i > pos){
            l->v[i] = l->v[i-1];
              i--;
          }
          l->v[pos] = inserirAmigo(l);
          l->qtd_elem += 1;
            
        }
}

int vazia(Lista *l){
  if(l->qtd_elem == 0){
    return 1;	
  }else{
    return 0;	
  }
}

int remover(Lista *l, int pos){
   int i=0, valor = 0;
   if(vazia(l)){ 
   	    printf("A lista está vazia, não ao possivel fazer remoção!");
    	exit(1);
    }else if(pos >= l->qtd_elem || pos<0) { 
        printf("Posição inválida, impossível fazer a remoção"); 
        exit(1);
	}else{
        valor = l-> v[pos];
 	    
	    for(i = pos+1; i < l->qtd_elem; i++){
	    	l->v[i-1] = l->v[i];
		}
 	    
	    l->qtd_elem -= 1;
	    return(valor); 
    }
}

void imprimir(Lista *l, int pos){
  if(!vazia(l) && pos >= 0 && pos < l->qtd_elem){
  		printf("\nO elemento  %d da Lista é  %d", pos, l->v[pos].);
    }else{
    	printf("Lista vazia ou posição inválida");	
	}
}

void liberar(Lista *l){
  free(pilha);
}

void inserirAmigo(Lista *l){
	char nome, endereco, idade;
	
	printf("Informe o nome: ");	
	fgets(amigo.nome, sizeof(amigo), stdin);
	
	printf("Informe a idade: ");
	fgets(amigo.idade, sizeof(amigo), stdin);
	
	printf("Informe o endereço: ");
	fgets(amigo.endereco, sizeof(amigo), stdin);
	
}
