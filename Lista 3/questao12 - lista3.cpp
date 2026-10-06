#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: \n");
	scanf("%d", &n);
	
	if(n == 0){
		printf("Zero!");
	}else if(n > 0){
		printf("Positivo!");
	}else{
		printf("Negativo!");
	}
	
	return 0;
}
