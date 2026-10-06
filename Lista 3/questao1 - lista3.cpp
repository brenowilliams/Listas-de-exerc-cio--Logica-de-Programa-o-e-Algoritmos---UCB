#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	char nome[10];
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Olá, %s! Seja bem-vindo(a) à disciplina de Lógica de Programação.", nome);
	
	return 0;
}
