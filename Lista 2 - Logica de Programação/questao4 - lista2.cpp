#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c;
	
	printf("Digite dois números: \n");
	scanf("%d %d", &a, &b);
	
	if(a == b){
		c = a + b;
		printf("%d + %d é igual a %d\n", a, b, c); 
	}else{
		c = a * b;
		printf("%d x %d é igual a %d\n", a, b, c); 
	}
	
	return 0;
	
}
