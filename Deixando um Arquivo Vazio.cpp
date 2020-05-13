#include <fstream>
#include <string>
#include <iostream>

using namespace std;
int main()
{
	ofstream meuArquivo;

	//abre arquivo
	meuArquivo.open("Texto.txt");

	//limpa arquivo
	meuArquivo << "";
	
	
	//encerra a leitura do arquivo
	meuArquivo.close();

	return 0;
}
