#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdbool.h>
#include <iostream>

using namespace std;
int main()
{

	//Definindo variaveis
	int a;
	float b;
	char c;
	bool d;

	//passando valores
	a = 10;
	b = 2.8;
	c = 'w';
	d = true;

	//escrevendo variaveis na tela
	printf("Valor : %d \n", a);
	printf("Valor : %.2f \n", b);
	printf("Valor : %c \n", c);
	printf("Valor : %d \n", d);

	//escrevendo variaveis na tela c++
	cout << "Valor :" << a;

	//lendo valores
	scanf("%d", &a);

	//lendo valores c++
	cin >> a;
	
	
	cout << "\nValor :" << a;
	
	system("pause");

	return 0;
}
