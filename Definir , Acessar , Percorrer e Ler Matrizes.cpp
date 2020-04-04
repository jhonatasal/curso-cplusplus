#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
//funcao principal do programa
using namespace std;

int main()
{
	//criando uma matriz
	int matriz [2][2], i, j;

	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[1][0] = 3;
	matriz[1][1] = 4;



	//imprimindo valores na tela
	for(i = 0; i < 2 ; i++)
	{
		for(j = 0; j < 2; j++)
		{
			//cout << "\ni = " << i << ", j = " << j;
			cout << matriz[i][j] * 5 << " " ;
		}
		cout << "\n";
	}

	//lendo valores para a matriz
	for(i = 0; i < 2 ; i++)
	{
		for(j = 0; j < 2; j++)
		{
			//cout << "\ni = " << i << ", j = " << j;
			scanf("%d", &matriz[i][j]) ;
		}
		cout << "\n";
	}

	//imprimindo valores na tela
	for(i = 0; i < 2 ; i++)
	{
		for(j = 0; j < 2; j++)
		{
			//cout << "\ni = " << i << ", j = " << j;
			cout << matriz[i][j] * 5 << " " ;
		}
		cout << "\n";
	}


	system("pause");

	//retorna o valor 0
	return 0;

}
