#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int num, valor, cont;
	char opcao;
	setlocale(LC_ALL, "portuguese");
	
	printf("\n######################################");
	printf("\n##Bem vindo ao Jogo##");
	printf("\n##adivinhe o n�mero");
	printf("\n######################################");
	printf("\n Vamos iniciar!!");
	
	printf("Gostaria de ver as instru��es? [S/N]\n");
	scanf("%s",&opcao);
	
	
	
	while(opcao=='S' || opcao=='s'){
		printf("Vamos iniciar as intru��es:\n");
		printf("1- Para jogar basta digitar um n�mero quaquer; \n");
		printf("2- Se o n�mero for maior ou menor voc� ser� avisado; \n");
		printf("3- voc� ter� um n�mero limitado de tentativas para acertar o n�mero; \n");
		printf("4- Depois que suas chances acabarem o n�mero ir� mudar; \n");
		printf(" 5-Depois que o n�mero mudar voc� poder� reiniciar o jogo\n");
		
		printf(" \n \n Gostaria de rever as instru��es? [S/N] \n \n");
		scanf("%s",&opcao);
	}

	
	printf("\n \n Ent�o vamos iniciar o jogo!!!! \n \n");
	valor=27;
	

	do{
		printf("\n Digite um n�mero: ");
		scanf("%d", &num);
	if(num == valor){
		printf("\n Voc� acertou");
	}
	else if(num < valor){
		printf("\n Voc� errou!! O valor � maior");
	}
	else if(num> valor){
		printf("\n Voc� errou!! O valor � menor");
	}
		
	}while(num<valor || num>valor);

	printf("\n\n\n");
	system("pause");
	
	return 0;
}
