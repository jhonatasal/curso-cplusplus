#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//funcao principal do programa

int main()
{
	//Definindo variaveis
	int a = 5;
	char b = 'x';

	scanf("%d",&a);
	switch(a)
	{
	case 1 :
		printf("\n Opcao escolhida numero : %d", a);
		break;
	case 2 :
		printf("\n Opcao escolhida numero : %d", a);
		break;
	case 3 :
		printf("\n Opcao escolhida numero : %d", a);
		break;
	case 4 :
		printf("\n Opcao escolhida numero : %d", a);
		break;
	default:
		printf("Opcao ivalida");
		break;
	}





	system("pause");

	//retorna o valor 0
	return 0;

}
