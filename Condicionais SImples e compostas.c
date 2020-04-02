#include <stdlib.h>
#include <stdio.h>

int main()
{
	//Definindo variaveis
	int a = 6;
	float b = 2.5;

	//Codicional Simples
	if(a == 5){
		printf("A variavel a = 5");
	}
	else if(a ==6) {
		printf("A variavel a = 6");
	}

	printf("\n");
	
	if(b == 2.5){
		printf("A variavel b = 2.5");
	}
	else{
		printf("Diferente de 2.5");
	}

	printf("\n");

	//Numero par ou impar
	if(a % 2 == 1){
		printf("A variavel a é impar");
	}
	else{
		printf("A variavel é par");
	}

	system("pause");
	return 0;
}
