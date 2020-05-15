#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10
using namespace std;

void fila_construtor(int vetor[TAM], int *frente, int *tras);
void fila_enfileirar(int fila[TAM], int valor, int *tras);
void imprimeVetor(int vetor[TAM]);
void inicializarVetorCom0s(int vetor[TAM]);
void fila_desenfileirar(int fila[TAM], int *frente);
void jogarElementosPraEsquerda(int fila[TAM]);
bool verificaFilaVazia(int fila[TAM]);
int main()
{
	int frente, tras;
	int fila[TAM];
	int valor;
	fila_construtor(fila, &frente, &tras);
	fila_enfileirar(fila, 5, &tras);
	fila_enfileirar(fila, 1, &tras);
	fila_enfileirar(fila, 3, &tras);
	imprimeVetor(fila);
	fila_desenfileirar(fila, &frente);
	imprimeVetor(fila);
	system("pause");
	return 0;
}



void fila_construtor(int vetor[TAM], int *frente, int *tras)
{
	inicializarVetorCom0s(vetor);
	*frente = 0;
	*tras = -1;
}

void fila_enfileirar(int fila[TAM], int valor, int *tras)
{
	if(*tras == TAM - 1)
	{
		printf("Fila cheia\n");
	}
	else
	{
		*tras = *tras + 1;
		fila[*tras] = valor;
	}
}

void imprimeVetor(int vetor[TAM])
{
	if(!verificaFilaVazia(vetor))
	{
		int cont;
		for(cont = 0; cont < TAM; cont++)
		{
			printf("%d\n", vetor[cont]);
		}
	}
	else
	{
		printf("Não é possivel imprimir a fila pois a mesma esta vazia \n");
	}

}
void inicializarVetorCom0s(int vetor[TAM])
{
	int cont;
	for(cont = 0; cont < TAM; cont++)
	{
		vetor[cont] = 0;
	}
}
void fila_desenfileirar(int fila[TAM], int *frente)
{
	printf("O valor %d foi removido\n", fila[*frente]);
	fila[*frente] = 0;
	*frente++;
	jogarElementosPraEsquerda(fila);
}
void jogarElementosPraEsquerda(int fila[TAM])
{
	int cont;
	for(cont = 0; cont < TAM; cont ++)
	{
		if(cont != (TAM - 1) )
		{
			fila[cont] = fila[cont + 1];
		}
		else
		{
			fila[cont] = 0;
		}

	}
}

bool verificaFilaVazia(int fila[TAM])
{
	int cont;
	bool filavazia = true;
	for(cont = 0; cont < TAM ; cont ++)
	{
		if(fila[cont] != 0)
		{
			filavazia = false;
		}
	}
	return filavazia;
}

