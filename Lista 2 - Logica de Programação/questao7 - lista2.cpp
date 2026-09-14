#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int n, par, mais5, mais8;
	
	printf("Digite um número: \n");
	scanf("%d", &n);
	
	par = n % 2;
	
	if(par == 0){
		mais5 = n + 5;
		printf("%d + 5 é igual a %d\n", n, mais5); 
	}else{
		mais8 = n + 8;
		printf("%d + 8 é igual a %d\n", n, mais8); 
	}
	
	return 0;		
}
