#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int num;
	printf("----------------------");
	printf("\n \n Seja bem vindo ao programa!! \n \n ");
	printf("---------------------- \n");
	printf("entre com um numero : ");
	scanf("%d",&num);
	
	if (num==0){
		printf("\n n�mero neutro\n ");
	}
	else if (num %2==0){
		//% � o resto da divis�o;
		printf("\n este numero � par \n");
		}
	else{
			printf("\n o n�mero � impar \n ");
		}
		system("pause");
}
