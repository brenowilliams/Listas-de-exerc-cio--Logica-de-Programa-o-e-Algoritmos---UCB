#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 1;
	while(contador <= 10){
		printf("%d,", contador);
		contador++;	
	}
}
	
