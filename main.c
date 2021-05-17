#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"

int main(){
	pilhaPtr P = NULL; //Inicializa a Pilha
	int op; //Variáveis
	
	menu(); //Mostra o menu
	scanf("%i", &op); //Pega a opção do usuário
	do{
		switch(op)
		{
			case 1:
				validar(P);
				break;
			case 0:
				free(P);
				break;		
			default:
                puts("Opcao Invalida.\n");
                clean_stdin();
                getchar();
		}
		if(op != 0){
            menu(); //Mostra o menu
            scanf("%i",&op); //Pega a opção do usuário
		}
	}while(op != 0);
}