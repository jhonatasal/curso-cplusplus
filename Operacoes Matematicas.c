#include <stdlib.h>
#include <stdio.h>

int main()
{
	//Definindo variaveis
	int a = 6, b = 3;

	//soma
	printf("A soma de %d + %d eh = %d\n", a, b, a + b);

	//subtracao
	printf("A subtracao de %d - %d eh = %d\n", a, b, a - b);

	//divisao
	printf("A subtracao de %d e %d eh = %d\n", a, b, a / b);

	//multiplicação
	printf("A multiplicacao de %d e %d eh = %d\n", a, b, a * b);
	
	//resto da divisao
	printf("O resto da divisao entre %d e %d eh = %d\n", a, b, a % b);
	
	//valor absoluto
	printf("O valor absoluto de -3 = %d \n", abs(-3));

	system("pause");
	return 0;
}
