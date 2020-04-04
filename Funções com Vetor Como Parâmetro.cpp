#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdbool.h>
#include <iostream>


void imprimeVetor(int *vetor, int tamanho);
void modificaVetor(int *vetor, int tamanho, int valor);

int main()
{
	int vetor[3] = {1, 2, 5};

	imprimeVetor(vetor, 3);

	modificaVetor(vetor, 3, 5484);

	imprimeVetor(vetor, 3);

	system("pause");

	return 0;
}

void imprimeVetor(int *vetor, int tamanho)
{
	int i;
	for(i = 0; i < tamanho; i++)
	{
		printf("%d\n", vetor[i]);
	}
}

void modificaVetor(int *vetor, int tamanho, int valor)
{
	int i;
	printf("Multiplicou vetor por %d\n", valor);
	for(i = 0; i < tamanho; i++)
	{
		vetor[i] = vetor[i] * valor;
	}
}
