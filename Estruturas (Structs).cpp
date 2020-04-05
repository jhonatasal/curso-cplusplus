#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct palavra
{
	int ordem;
	char letra;
	char texto[255];

};

int main()
{
	int i;
	//criando palavra
	struct palavra primeiraPalavra;

	//modificando palavra
	primeiraPalavra.ordem = 1;
	primeiraPalavra.letra = 'J';
	strcpy(primeiraPalavra.texto, "palavrinha");


	printf("Ordem : %d\nLetra : %c \nTexto : %s\n\n", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);


	//fazendo uma lista de structs
	struct palavra listaDePalavras[3];

	listaDePalavras[0].letra = 'J';
	strcpy(listaDePalavras[0].texto, "Jhonatas");

	listaDePalavras[1].letra = 'S';
	strcpy(listaDePalavras[1].texto, "Samara");

	listaDePalavras[2].letra = 'B';
	strcpy(listaDePalavras[2].texto, "Breno");

	//imprimido vetor de struct	
	for(i = 0; i < 3 ; i++)
	{
		listaDePalavras[i].ordem = i;
		printf("Ordem : %d\nLetra : %c \nTexto : %s\n\n", listaDePalavras[i].ordem, listaDePalavras[i].letra, listaDePalavras[i].texto);
	}


	system("pause");
	return 0;
}
