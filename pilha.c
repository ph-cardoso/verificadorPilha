#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#define TAM 30 // limite de caracteres da Equação

struct Pilha{
	char dado;
	struct Pilha* prox;
};

// limpa o buffer do teclado
void clean_stdin(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void menu(){
	system("cls");
    printf("||--------------------------------------------------------------|| \n");
    printf("||---------------------------- MENU ----------------------------|| \n");
    printf("||--------------------------------------------------------------|| \n\n");
    printf("1 - Inserir equacao\n");
	printf("0 - Fechar o programa.\n");
	printf("\nOpcao: ");
}
	  
void push(pilhaPtr *topo, char info){
	pilhaPtr novo = (pilhaPtr) malloc(sizeof(pilha));
	
	if(novo != NULL){
		novo->dado = info;
		novo->prox = *topo;
		*topo = novo;
	}
	else{
		printf("%c Não Inserido. Sem memória disponível.\n", info);
	}
}

int pop(pilhaPtr *topo){
	pilhaPtr aux = *topo;
	int valor = (*topo)->dado;
	*topo = (*topo)->prox;
	free(aux);
	return valor;
}

// retorna 1 se a Pilha estiver vazia, 0 caso contrário
int cheia(pilhaPtr topo){
	return topo == NULL;
}

// retorna o dado do topo da pilha
char retornaTopo(pilhaPtr topo){
	return topo->dado;
}

void validar(pilhaPtr *PtrPilha){
	char equacao[TAM];
	int i;
	int flag = 1; // flag de validade

	system("cls");
	printf("||--------------------------------------------------------------|| \n");
    printf("||-------------------------- EQUACAO ---------------------------|| \n");
    printf("||--------------------------------------------------------------|| \n\n");
	printf("Insira a equacao: ");
	clean_stdin();
	fgets(equacao, TAM, stdin); // pega a String

	// checar string caractere por caractere
	for(i=0;i<strlen(equacao);i++){
		//se o elemento for (, [, {
		if(equacao[i] == 40 || equacao[i] == 91 || equacao[i] == 123)
			push(&PtrPilha, equacao[i]);
		// se o elemento for ), ], }
		if(equacao[i] == 41 || equacao[i] == 93 || equacao[i] == 125){
			//se char = )
			if(equacao[i] == 41){
				if(retornaTopo(PtrPilha)==40)
					pop(&PtrPilha);
				else
					flag = 0;
			}
			// se char = ]
			if(equacao[i] == 93){
				if(retornaTopo(PtrPilha)==91)
					pop(&PtrPilha);
				else
					flag = 0;
			}
			// se char = }
			if(equacao[i] == 125){
				if(retornaTopo(PtrPilha)==123)
					pop(&PtrPilha);
				else
					flag = 0;
			}
		}
	}

	// checa se a Pilha está vazia
	if(cheia(PtrPilha) && flag == 1){
		printf("\nEquacao: %s\n", equacao);
		printf("\nEquacao Valida!\n");
	}
	else{
		printf("\nEquacao: %s\n", equacao);
		printf("\nEquacao Invalida!\n");
	}

	clean_stdin();
	getchar();
}