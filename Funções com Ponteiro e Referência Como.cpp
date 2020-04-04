#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdbool.h>
#include <iostream>

using namespace std;


//trocando valor por referencia
void aumenta10(int *numero);

int main()
{
	//definindo variaveis
	int a = 5;

	printf("Valor de a eh : %d\n", a);

	aumenta10(&a);
	
	printf("Valor de a eh : %d\n", a);
	system("pause");

	return 0;
}
void aumenta10(int *numero)
{
	*numero = *numero + 10;
}
