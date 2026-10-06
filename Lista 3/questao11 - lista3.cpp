#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	if( idade >= 18){
		printf("Maior de idade");
	}else{
		printf("Menor de idade");
	}
	
	return 0;
}
