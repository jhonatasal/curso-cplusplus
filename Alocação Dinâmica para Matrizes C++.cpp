#include <stdlib.h>
#include <stdio.h>
#include <new>


int main()
{
	//defindo variaveis
	int linha = 3, colunas = 3
							 , i, j;
	int **matriz;
	//alocando as linhas da matriz
	matriz = (int ** ) new int(linha);

	//alocando memoria para as colunas
	for(i = 0; i < linha ; i++)
	{
		matriz[i] = (int *)new int(colunas);
	}

	for(i = 0; i < linha; i ++)
	{
		for(j = 0; j < colunas; j++)
		{
			matriz[i][j] = i + j;
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	free(matriz);

	system("pause");
	return 0;
}
