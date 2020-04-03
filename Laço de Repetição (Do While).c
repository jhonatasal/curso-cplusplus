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

	
	a = 1;
	
	do{
		printf("%d\n", a);
		a--;
	}while(a >= 1);

	system("pause");

	//retorna o valor 0
	return 0;

}
