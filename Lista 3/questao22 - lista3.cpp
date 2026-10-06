#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 10;
	while(contador >= 0){
		printf("%d,", contador);
		contador--;
	}
	printf("\nFim da contagem!");
}

	
