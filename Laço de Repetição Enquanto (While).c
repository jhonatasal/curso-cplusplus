#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//funcao principal do programa

int main()
{

	//Definindo variaveis
	int a = 1, b = 10;
	//contando de 0 a 10
	while(a <= 10)
	{
		printf("%d\n", a);
		a++;
	}

	while(b >= 1)
	{
		printf("%d\n", b);
		b--;
	}

	system("pause");

	//retorna o valor 0
	return 0;

}
