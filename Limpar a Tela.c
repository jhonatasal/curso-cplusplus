#include <stdlib.h>
#include <stdio.h>

//cabecalho funcao
void desenhaBorda();
void limpaTela();
int main()
{

	int a ;

	printf("Digite o valor a:\n");
	desenhaBorda();
	scanf("%d", &a);

	//limpando a tela
	limpaTela();
	
	printf("o valor a eh %d\n", a);

	system("pause");

	//retorna o valor 0
	return 0;

}
void desenhaBorda()
{
	printf("\n-----------------\n");
}
void limpaTela(){
	system("CLS");
}

