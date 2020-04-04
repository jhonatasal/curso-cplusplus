#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//funcao principal do programa

//cabecalho funcao
void desenhaBorda();

int main()
{

	//chamando a funcao
	desenhaBorda(9);
	desenhaBorda(10);

	system("pause");

	//retorna o valor 0
	return 0;

}
void desenhaBorda(int num)
{
	printf("---------%d--------\n", num);
}
