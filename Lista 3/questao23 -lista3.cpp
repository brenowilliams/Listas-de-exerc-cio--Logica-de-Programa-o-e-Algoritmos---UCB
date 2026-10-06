#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 2;
	while(contador <= 100){
		printf("%d.", contador);
		contador+= 2;	
	}
}
	
