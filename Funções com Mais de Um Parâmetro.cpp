#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdbool.h>
#include <iostream>

using namespace std;
void mostraSoma(int num1, int num2);

int main()
{
	int a = 5, b = 10;

	mostraSoma(a, b);



	system("pause");

	return 0;
}
void mostraSoma(int num1, int num2)
{
	printf("A soma de %d + %d eh igual a %d\n", num1, num2, num1 + num2  );
}
