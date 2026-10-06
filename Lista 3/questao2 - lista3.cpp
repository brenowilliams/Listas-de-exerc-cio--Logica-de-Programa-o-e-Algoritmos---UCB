#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, soma;
	
	printf("Digite dois números: ");
	scanf("%d %d", &n1, &n2);
	
	soma = n1 + n2;
	
	printf("%d + %d = %d", n1, n2, soma);
	
	return 0;	
}
