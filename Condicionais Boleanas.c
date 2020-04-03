#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//funcao principal do programa

int main()
{
	//Definindo variaveis
	bool a = true, b = false;
	
	//se a for verdadeiro
	if(a){
		printf("\nA eh verdadeiro");
	}
	
	//comparando o B
	if(b){
		printf("\nB eh verdadeiro");
	}else{
		printf("\nB eh falso");
	}
	
	system("pause");

	//retorna o valor 0
	return 0;

}
