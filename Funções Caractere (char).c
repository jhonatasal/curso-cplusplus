#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdbool.h>
//funcao principal do programa

//cabecalho funcao
char retornaLetra();

int main()
{

	//chamando a funcao
	char letra = retornaLetra();
	
	desenhaBorda();
	printf("%c", letra);
	desenhaBorda();

	system("pause");

	//retorna o valor 0
	return 0;

}
void desenhaBorda()
{
	printf("\n-----------------\n");
}
char retornaLetra(){
	return 'x';
}
