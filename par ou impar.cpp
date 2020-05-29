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
		printf("\n número neutro\n ");
	}
	else if (num %2==0){
		//% é o resto da divisão;
		printf("\n este numero é par \n");
		}
	else{
			printf("\n o número é impar \n ");
		}
		system("pause");
}
