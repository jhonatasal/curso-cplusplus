#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdbool.h>
#include <iostream>
#define TAM 3
using namespace std;
int main()
{
	//Definindo Vetores
	int vetor [TAM] = {5, 10, 15}, cont,i,j;

	//imprimindo valores do vetor com for
	for(cont = 0; cont < TAM; cont ++)
	{
		//printf("%d\n",vetor[cont]);
		cout << vetor[cont] << "\n";
	}

	//passando valores para o vetor
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;


	//imprimindo valores do vetor com for
	for(cont = 0; cont < TAM; cont ++)
	{
		//printf("%d\n",vetor[cont]);
		cout << vetor[cont] << "\n";
	}
	cont = 0;
	//imprimindo valores do vetor com while
	while(cont < TAM)
	{
		//printf("%d\n",vetor[cont]);
		cout << vetor[cont] << "\n";
		cont++;
	}

	//definindo matrizes
	int matriz[TAM][TAM];
	
	//capturando valores da matriz
	for(i = 0; i <3 ; i++){
		for(j = 0; j < 3 ; j++){
			printf("\nDigite o valor da linha %d, coluna %d :",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i = 0; i <3 ; i++){
		for(j = 0; j < 3 ; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	

	system("pause");

	return 0;
}
