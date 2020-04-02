#include <stdlib.h>
#include <stdio.h>

//funcao principal do programa

int main()
{
	//Definindo variaveis
	int a = 5, b = 10, c = 15;
	
	//maior
	if(a > 2){
		printf("\n%d eh maior que 2 ",a);
	}
	
	//maior ou igual
	if(c >= b){
		printf("\n %d eh maior que %d",c,b);
	}
	
	//menor
	if(a < 10){
		printf("\n%d eh menor que 10 ",a);
	}
	
	//menor ou igual
	if(a <= c){
		printf("\n%d eh menor que %d",a,c);
	}
	
	if(c != 10){
		printf("\n%d nao eh igual a 10",c);
	}
	
	
	system("pause");

	//retorna o valor 0
	return 0;

}
