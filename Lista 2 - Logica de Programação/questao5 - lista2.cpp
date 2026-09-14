#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int n, dobro, triplo;
	
	printf("Digite um número: \n");
	scanf("%d", &n);
	
	if(n > 0){
		dobro = n * 2;
		printf("O dobro de %d é igual a %d\n", n, dobro); 
	}else{
		triplo = n * 3;
		printf("O triplo de %d é igual a %d\n", n, triplo); 
	}
	
	return 0;
	
}
