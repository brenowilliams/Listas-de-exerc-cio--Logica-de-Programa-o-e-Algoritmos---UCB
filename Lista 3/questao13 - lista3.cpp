#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: \n");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf("%d é par!", n);
 	}else{
		printf("%d é Nímpar!", n);
	}
	
	return 0;
}
