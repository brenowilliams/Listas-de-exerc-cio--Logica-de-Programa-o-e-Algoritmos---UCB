#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf("Digite 3 números inteiros diferentes entre si: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if(n1 > n2 && n2 > n3) {
		printf("Ordem decrescente: %d - %d - %d", n1, n2, n3);
	}else if(n1 > n3 && n3 > n2){
		printf("Ordem decrescente: %d - %d - %d", n1, n3, n2);
	}else if(n3 > n1 && n1 > n2){
		printf("Ordem decrescente: %d - %d - %d", n3, n1, n2);
	}else if(n3 > n2 && n2 > n1){
		printf("Ordem decrescente: %d - %d - %d", n3, n2, n1);			
	}else if(n2 > n1 && n1 > n3){
		printf("Ordem decrescente: %d - %d - %d", n2, n1, n3);
	}else{
		printf("Ordem decrescente: %d - %d - %d", n2, n3, n1);
	}
					

	return 0;		
}
