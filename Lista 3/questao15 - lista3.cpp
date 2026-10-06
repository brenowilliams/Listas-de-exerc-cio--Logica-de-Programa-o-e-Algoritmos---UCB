#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf("Digite três números inteiros: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if(n1 > n2 && n1 > n3){
		printf("%d é maior que %d e %d!", n1, n2, n3);
	}else if(n2 > n1 && n2 > n3){
		printf("%d é maior que %d e %d!", n2, n1, n3);
	}else if(n3 > n1 && n3 > n2){
		printf("%d é maior que %d e %d!", n3, n1, n2);
	}else{
		printf("Os 3 números são iguais!");
	}
	
	return 0;
}
