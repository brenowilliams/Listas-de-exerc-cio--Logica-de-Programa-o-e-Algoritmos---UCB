#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int numero, contador, somaN;
	
	printf("Digite um número positivo: \n");
	scanf("%d", &numero);
	
	for(contador = 1; contador <= numero; contador++){
			somaN = numero + contador;
			printf("%d\n", numero);
	}
	return 0;
}
	
