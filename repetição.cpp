#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int num, valor, cont;
	char opcao;
	setlocale(LC_ALL, "portuguese");
	
	printf("\n######################################");
	printf("\n##Bem vindo ao Jogo##");
	printf("\n##adivinhe o número");
	printf("\n######################################");
	printf("\n Vamos iniciar!!");
	
	printf("Gostaria de ver as instruções? [S/N]\n");
	scanf("%s",&opcao);
	
	
	
	while(opcao=='S' || opcao=='s'){
		printf("Vamos iniciar as intruções:\n");
		printf("1- Para jogar basta digitar um número quaquer; \n");
		printf("2- Se o número for maior ou menor você será avisado; \n");
		printf("3- você terá um número limitado de tentativas para acertar o número; \n");
		printf("4- Depois que suas chances acabarem o número irá mudar; \n");
		printf(" 5-Depois que o número mudar você poderá reiniciar o jogo\n");
		
		printf(" \n \n Gostaria de rever as instruções? [S/N] \n \n");
		scanf("%s",&opcao);
	}

	
	printf("\n \n Então vamos iniciar o jogo!!!! \n \n");
	valor=27;
	

	do{
		printf("\n Digite um número: ");
		scanf("%d", &num);
	if(num == valor){
		printf("\n Você acertou");
	}
	else if(num < valor){
		printf("\n Você errou!! O valor é maior");
	}
	else if(num> valor){
		printf("\n Você errou!! O valor é menor");
	}
		
	}while(num<valor || num>valor);

	printf("\n\n\n");
	system("pause");
	
	return 0;
}
