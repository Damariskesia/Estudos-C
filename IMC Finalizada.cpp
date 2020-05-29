#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float peso, altura, imc;
	char opcao, nome[20];
	setlocale(LC_ALL, "portuguese");
	
	printf("\n----------------------------------------------------\n");
	printf("\n programa desenvolvido por Damaris Késia Vaz \n");
	printf("\n Olá, seja bem vindo ao teste de IMC!! \n");
	printf("\n Vamos iniciar os calculos de IMC \n");
	printf("\n");
	printf("\n----------------------------------------------------\n");
	

	printf("\n----------------------------------------------------\n");
	printf("Qual seu nome?:");
	scanf("%s", &nome);
	printf("\n %s,quer fazer algum calculo de IMC?[S/N]: ", nome);
	scanf("%s", &opcao);
	
	while(opcao=='s'){
	printf("\n %s, por gentileza, digite a altura:", nome);
	scanf("%f", &altura);
	printf("\n %s, por gentileza, digite o peso:", nome);
	scanf("%f",&peso);
	imc=peso/(altura*altura);
	
	printf("\n ################################################# \n");
	printf("\n A altura digitada foi : %.2f e o peso digitado foi: %.1f \n",altura, peso);
	printf("\n Observação:\n");
	printf("%s, com base nas informações temos o resultado : \n", nome);
	
		if(imc<16){
			printf("O IMC é de %.1f e Indica: Magreza severa \n",imc);
		}
		else if(imc>16 && imc<17){
			printf("O IMC é  de %.1f e Indica:Magreza moderada \n", imc);
		}
		else if(imc>17 && imc<18.5){
			printf("O IMC  é  de %.1f e Indica: Abaixo do peso \n", imc);
		}
		else if(imc>18.5 && imc<=24.9){
			printf("O IMC é  de %.1f e Indica: Peso normal \n", imc);	
		}
		else if(imc>24.9 && imc<=29.9){
			printf("O IMC é  de %.1f e Indica: Sobrepeso \n", imc);	
			}
		else if(imc>29.9 && imc<=34.9){
			printf("O IMC é  de %.1f e Indica: Obesidade Grau 1 \n", imc);	
		}
		else if(imc>34.9 && imc<=39.9){
			printf("O IMC é  de %.1f e Indica: Obesidade Grau 2 \n", imc);
		}
		else if(imc>39.9){
			printf("O IMC é  de %.1f e Indica: Obesidade Grau 3 \n", imc);
		}
	printf("\n ################################################# \n");
	printf("\n----------------------------------------------------\n");
	
	printf("\n %s, gostaria de fazer mais algum calculo?[S/N]:",nome);
	scanf("%s", &opcao);
			
	}
	
	printf(" \n %s, muito obrigada pela atenção!! \n",nome);
	
	system("pause");
	return 0;
}
