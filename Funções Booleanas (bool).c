#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdbool.h>
//funcao principal do programa

//cabecalho funcao
bool retornaBool();

int main()
{

	//chamando a funcao
	bool variavelBoolean= retornaBool();
	
	desenhaBorda();
	printf("%d", variavelBoolean);
	desenhaBorda();

	system("pause");

	//retorna o valor 0
	return 0;

}
void desenhaBorda()
{
	printf("\n-----------------\n");
}
bool retornaBool(){
	return false;
}
