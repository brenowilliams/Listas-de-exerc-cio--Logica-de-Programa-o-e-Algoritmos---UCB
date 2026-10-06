#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int numero, contador, tabuada;
	
	printf("Digite um número: \n");
	scanf("%d", &numero);
	
	for(contador = 1; contador <= 10; contador++){
		tabuada = numero * contador;
		printf("%d x %d = %d \n", numero, contador, tabuada);
		
		
	}
	
	
	return 0;
}
	
