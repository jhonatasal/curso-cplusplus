#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//funcao principal do programa

int main()
{

	//Definindo variaveis
	int opcao;
	//loop de escolha
	while(opcao < 1 || opcao > 3)
	{
		//Interface de Menu
		printf("Escolha uma opcao:\n");
		printf("1 -opcao 1\n");
		printf("2 -opcao 2\n");
		printf("3 -opcao 3\n");

		//lendo opcao
		scanf("%d", &opcao);

		switch(opcao)
		{
		case 1:
			printf("Opcao %d foi escolhida\n", opcao);
			break;
		case 2:
			printf("Opcao %d foi escolhida", opcao);
		case 3:
			printf("Opcao %d foi escolhida", opcao);
		case 4:
			printf("Opcao %d foi escolhida", opcao);
		default:
			printf("Opcao invalida);
			break;
		}
	}



	system("pause");

	//retorna o valor 0
	return 0;

}
