#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10
#include <stdio.h>

using namespace std;

void imprimeVetor(int vetor[TAM]);
void pilhaPush(int vetor[TAM], int *topo);
void limpaTela();
void pilhaPop(int vetor[TAM], int *topo);
bool pilha_vazia(int topo);
bool pilha_cheia(int topo);
int main()
{
	int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int topo = -1; //topo da pilha
	int opcao = 1;
	while(opcao != 2 && (!pilha_cheia(topo)) )
	{
		pilhaPush(pilha, &topo);
		printf("Deseja inserir mais itens na pilha\n1-SIM \n2-NAO\n");
		scanf("%d", &opcao);
	}
	while(opcao == 2)
	{
		pilhaPop(pilha, &topo);
		printf("Deseja remover mais itens na pilha\n2-SIM \n1-NAO\n");
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
void pilhaPop(int vetor[TAM], int *topo)
{
	if(*topo == -1)
	{
		printf("Pilha já esta vazia");
	}
	else
	{
		vetor[*topo] = 0;
		*topo = *topo - 1;
	}
	limpaTela();
	imprimeVetor(vetor);
}

bool pilha_vazia(int topo)
{
	if(topo == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool pilha_cheia(int topo)
{
	if(topo == TAM - 1)
	{
		printf("Pilha cheia\n");
		return true;
	}
	else
	{
		return false;
	}
}
void limpaTela()
{
	system("CLS");
}
