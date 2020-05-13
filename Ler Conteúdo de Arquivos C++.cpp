#include <fstream>
#include <string>
#include <iostream>

using namespace std;
int main()
{
	//Qual arquivo sera lido

	ifstream input("Texto.txt");

	//string que recebera o texto lido
	string textoLido;

	for(string line; getline(input, line);)
	{
		textoLido += line;
	}

	//mostrar conteudo
	cout << textoLido;

	return 0;
}
