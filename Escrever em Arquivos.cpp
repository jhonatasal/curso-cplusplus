#include <string.h>
#include <stdio.h>
#include <fstream>

using namespace std;
int main()
{
	//Cria o objeto de arquivo
	ofstream arquivoDeSaida;
	//abri o arquivo ou cria caso não exista
	arquivoDeSaida.open("Texto.txt", std::ios_base::app);
	
	//escrevendo no arquivo
	arquivoDeSaida << "Jhonatas\nAlves";
	
	//fecha leitura do arquivo
	arquivoDeSaida.close();
	
	return 0;
}

