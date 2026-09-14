#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, soma;
	printf("Digite 3 valores para A, B, C: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	soma = a + b;
	
	if(soma < c){
		printf("A + B é menor que C, %d é menor que %d!\n", soma, c);
	}else{
		printf("A + B é maior que C, %d é maior que %d!\n", soma, c);
	}
	
	
	
	return 0;
	
}
