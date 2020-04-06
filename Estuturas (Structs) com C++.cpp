#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <new>
#include <iostream>
using namespace std;

typedef struct fruta
{
	string cor;
	string nome;
};

int main()
{

	//criado um ponteiro para o struct criado
	fruta *primeiraFruta = new fruta;

	//modificando valores
	primeiraFruta-> cor = "Laranja";
	primeiraFruta-> nome = "Laranja";

	//imprimindo valores
	cout << "Primeira fruta : " << primeiraFruta->cor);

	system("pause");
	return 0;
}

