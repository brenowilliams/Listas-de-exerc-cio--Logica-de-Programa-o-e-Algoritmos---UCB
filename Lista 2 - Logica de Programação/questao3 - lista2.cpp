#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int n, resto;
	printf("Digite um número inteiro: \n");
	scanf("%d", &n);
	
	resto = n % 2;
	
	if(resto == 0){
		printf("%d é par!", n);
	}else{
		printf("%d é impar!", n);
	}
	
	
	
	return 0;
	
}
