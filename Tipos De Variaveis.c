#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
	//definindo variaveis
	int a ;
	float b;
	char c;
	bool d;
	
	//Passando valores
	a = 5;
	b = 2.3;
	c = 'a';
	d = true;

	//Escrevendo na tela
	printf("\n O valor de a =%d", a);
	printf("\n O valor de b =%.2f", b);
	printf("\n O valor de b =%c\n", c);
	printf("\n O valor de b =%d", d);
	printf("\n");
	//capturando dados
	scanf("%d", &a);
	scanf("%f", &b);
	scanf(" %c", &c);

	//Escrevendo na tela
	printf("O valor de a agora é igual a %d", a);
	printf("\n");
	printf("O valor de b agora é igual b %.2f", b);
	printf("\n");
	printf("O valor de c agora é igual b %c\n", c);

	system("pause");
	return 0;
}
