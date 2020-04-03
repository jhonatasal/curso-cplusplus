#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//funcao principal do programa

int main()
{

	//Definindo variaveis
	int count;

	//tabuada do 5
	for( count = 1 ; count <= 10; count++)
	{
		printf("\n5 x %d = %d", count, count * 5);
	}

	//contando de 2 em 2
	for( count = 0 ; count <= 10; count = count + 2)
	{
		printf("\n%d", count);
	}

	//contagem regressiva
	for(count = 10; count > 0 ; count--)
	{
		printf("\n%d", count);
	}


	system("pause");

	//retorna o valor 0
	return 0;

}
