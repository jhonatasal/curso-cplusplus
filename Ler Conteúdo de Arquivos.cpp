#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	//criando curso que percorre todas as letras do arquivo
	int c ;
	FILE *file;

	//abri o arquivo no diretorio escolhido
	file = fopen("Texto.txt", "r");

	//Se o arquivo for encontrado
	if(file){
		//enquanto encontra letras
		while(c = getc(file) != EOF){
			//imprime 
			printf("%c",c);
		}
		//fecha o arquivo
		fclose(file);
	}
	return 0;
}

