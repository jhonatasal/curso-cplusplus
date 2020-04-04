#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//funcao principal do programa

//cabecalho funcao
int retorna10();
void desenhaBorda();

int main()
{

	//chamando a funcao
	desenhaBorda();
	desenhaBorda();

	int a = retorna10();

	printf("%d", a);

	system("pause");

	//retorna o valor 0
	return 0;

}
void desenhaBorda()
{
	printf("-----------------\n");
}
int retorna10()
{
	return 10;
}
