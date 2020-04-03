#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//funcao principal do programa

int main()
{
	//Definindo variaveis
	int a = 10;
	
	//Conectivo logico E(AND)
	if(a >5 && a <15){
		printf("A variavel a esta entre 5 e 15\n");
	}
	
	//Conectivo logico OU(OR)
	if(a >5 || a <15){
		printf("A variavel a eh maior que 5 ou 15\n");
	}

	if((a > 5 && a < 15) || a == 20){
		printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20\n");
	}
	system("pause");

	//retorna o valor 0
	return 0;

}
