#include <stdio.h>
#include <locale.h>
#include <string.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, operacao;
	char op[5];
	
	printf("Digite um número: \n");
	scanf("%f", &n1);
	printf("Digite outro número: \n");
	scanf("%f", &n2);
	printf("Digite a operação matemática(+, -, * ou /): \n");
	scanf("%s", &op);
	
	
	if (strcmp(op, "+") == 0){
		operacao =  n1 + n2;
		printf("%.2f", operacao);
	}else if(strcmp(op, "-") == 0){
		operacao =  n1 - n2;
		printf("%.2f", operacao);
	}else if(strcmp(op, "*") == 0){
		operacao =  n1 * n2;
		printf("%.2f", operacao);
	}else if(strcmp(op, "/") == 0 && n2 == 0){
		printf("ERRO");
	}else{
		operacao = n1 / n2;
		printf("%.2f", operacao);
	}
	
	return 0;
}
