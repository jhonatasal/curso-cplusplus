#include <stdlib.h>
#include <stdio.h>

int* alocaVetor(int tam);
void imprimeVetor(int *vetor, int tamanho);
int main()
{
	//definindo variaveis
	int *vetor, tamanho ;

	//lendo o tamanho do vetor pelo o usuario
	printf("Digite o tamanho para o vetor ");
	scanf("%d", &tamanho);

	//ponteiro recebe o endereço de memoria que foi alocado para o vetor
	vetor = alocaVetor(tamanho);

	//atribuindo valores no vetor
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;

	//imprime vetor
	imprimeVetor(vetor, tamanho);

	system("pause");
	return 0;
}

int* alocaVetor(int tamanho)
{
	//é criado um ponteiro auxiliar
	int *aux;
	aux = (int*) malloc(tamanho * sizeof(int));

	//retorna o ponteiro que aponta para a primeira posição de memoria do vetor alocado
	return aux;
}

void imprimeVetor(int *vetor, int tamanho)
{
	int i;
	for(i = 0; i < tamanho; i ++)
	{
		printf("%d\n", vetor[i]);
	}



}
