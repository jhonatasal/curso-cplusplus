#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//funcao principal do programa

int main()
{
	//variaveis
	int a = 20;

	//imprimindo valor de uma variavel
	printf("Valor de a = %d\n", a);

	//imprimindo o Endereco de uma variavel
	printf("Endereco de a: %d \n", &a);
	
	//lendo o valor de uma variavel
	scanf("%d", &a);

	printf("\nValor de a = %d\n", a);
	
	
	//variaveis armazenam valores 
	int b = 10;
	printf("Valor de b eh: %d\n", b);
	printf("Endereco de b: %d \n", &b);
	
	//ponteiro armazenam posicoes na memoria
	int *ponteiro;
	
	//ponteiro recebendo a posicao da memoria da variavel b
	ponteiro = &b;
	
	//imprimindo o valor do ponteiro
	printf("Valor de ponteiro é o endereco de b: %d\n",ponteiro );
	
	// "*" pode ser lido como "CONTEUDO APONTADO POR"
	//trocando o valor de b pelo ponteiro 
	*ponteiro = 333;
	
	printf("O valor de b agora eh %d\n",b);
	
	
	
	system("pause");

	//retorna o valor 0
	return 0;

}
