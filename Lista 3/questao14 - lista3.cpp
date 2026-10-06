#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite dois números inteiros: \n");
	scanf("%d %d", &n1, &n2);
	
	if(n1 > n2){
		printf("%d é maior que %d!", n1, n2);
	}else {
		printf("%d é maior que %d!", n2, n1);
	}
	
	return 0;
}
