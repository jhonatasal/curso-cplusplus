#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
//funcao principal do programa

int main()
{
	//metodo c
	char palavra[255];

	printf("Digite uma palavra: \n");

	//limpa o buffer
	setbuf(stdin, 0);

	//le a String
	fgets(palavra, 255, stdin);

	//limpar exendente
	palavra[strlen(palavra) - 1] = '\10';


	printf("\n%s", palavra );


	//	metodo c++
	
	std::string palavra1;
	
	printf("Digite uma palavra: ");
	
	std::cin >> palavra1;
	
	std::cout << palavra;
	

	system("pause");

	//retorna o valor 0
	return 0;

}
