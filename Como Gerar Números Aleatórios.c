#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//funcao principal do programa

int main()
{

	//Reponsavel por alimentar o rand de forma diferente
	srand((unsigned)time(NULL));

	//Variavel que recebe o resto da divisap dp numero por 3(aleatorio entre 0 e 2 )
	int aleatorio = rand() % 3;

	//Variavel que recebe o resto da divisap dp numero por 5(aleatorio entre 1 e 5 )
	int aleatorioSegundo = (rand() % 5) + 1 ;

	
	printf("%d\n", aleatorio);

	printf("%d\n",aleatorioSegundo);
	system("pause");

	//retorna o valor 0
	return 0;

}
