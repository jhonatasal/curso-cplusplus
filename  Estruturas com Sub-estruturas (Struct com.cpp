#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Data
{
	int dia;
	int mes;
	int ano;
};
typedef struct Aluno
{
	int id;
	char nome[255];
	Data nascimento;
};
void imprimeAluno(Aluno aluno);


int main()
{

	Aluno aluno;
	aluno.id = 1;
	strcpy(aluno.nome, "Jhonatas");
	aluno.nascimento.dia = 23;
	aluno.nascimento.mes = 12;
	aluno.nascimento.ano = 1995;

	imprimeAluno(aluno);

	system("pause");
	return 0;
}
void imprimeAluno(Aluno aluno)
{
	printf("Aluno id: %d\n", aluno.id);
	printf("Aluno Nome: %s\n", aluno.nome);
	printf("Aluno data de Nascimento: %d/%d/%d\n", aluno.nascimento.dia, aluno.nascimento.mes, aluno.nascimento.ano);
}
