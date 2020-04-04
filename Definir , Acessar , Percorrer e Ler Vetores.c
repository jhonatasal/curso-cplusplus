#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//funcao principal do programa

int main()
{

	int vetor [3], cont;

	vetor[0] = 5;
	vetor[1] = 10;
	vetor[2] = 15;

	for(cont = 0; cont < 3; cont++)
	{
		printf("Posicao %d: %d\n", cont, vetor[cont]);
	}


	system("pause");

	//retorna o valor 0
	return 0;

}
