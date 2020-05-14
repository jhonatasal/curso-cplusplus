#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10
#include <stdio.h>

using namespace std;

void imprimeVetor(int vetor[TAM]);
void pilhaPush(int vetor[TAM], int *topo);
void limpaTela();
int main()
{
	int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int topo = -1; //topo da pilha
	int opcao = 1;
	while(opcao != 2)
	{
		pilhaPush(pilha, &topo);
		printf("Deseja inserir mais itens na pilha\n1-SIM \n2-NAO\n");
		scanf("%d", &opcao);
	}


	system("pause");
	return 0;
}
void imprimeVetor(int vetor[TAM])
{
	int cont;
	for(cont = 0; cont < TAM; cont ++)
	{
		printf("%d\n", vetor[cont]);
	}
}
void pilhaPush(int vetor[TAM], int *topo)
{
	printf("Digite um valor a ser inserido na Pilha: \n");
	int valor;
	scanf("%d", &valor);
	if(*topo == TAM - 1)
	{
		printf("Pilha cheia");
		system("pause");
	}
	else
	{
		*topo = *topo + 1;
		vetor[*topo] = valor;
	}
	limpaTela();
	imprimeVetor(vetor);
}
void limpaTela()
{
	system("CLS");
}
