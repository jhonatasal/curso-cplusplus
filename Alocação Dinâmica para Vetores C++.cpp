#include <stdlib.h>
#include <stdio.h>
#include <new>


int main()
{
	int tamanho, i ;

	//lendo o tamanho
	printf("Digite o tamanho\n");
	scanf("%d", &tamanho);

	printf("Tamanho escolhido: %d \n", tamanho);

	//criando um ponteiro que recebe o novo ponteiro vazio
	int *vetor = new int[tamanho];
	
	//imprime vetor
	for(i = 0; i < tamanho; i ++)
	{
		vetor[i] = i;
		printf("%d\n", vetor[i]);
	}


	system("pause");
	return 0;
}
