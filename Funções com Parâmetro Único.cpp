#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdbool.h>
#include <iostream>

using namespace std;

int mostraSucessor(int num);
int mostraAntecessor(int num);
int main()
{

	int a ;

	printf("Digite um valor para a\n");

	scanf("%d", &a);

	printf("O sucessor de %d eh %d e o antecessor eh %d\n", a, mostraSucessor(a), mostraAntecessor(a));

	system("pause");

	return 0;
}
int mostraSucessor(int num)
{
	num ++;
	return num;
}

int mostraAntecessor(int num)
{
	num --;
	return num;
}
