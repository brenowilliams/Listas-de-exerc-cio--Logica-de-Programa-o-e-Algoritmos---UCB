#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float valor, desc;
	
	printf("Digite o valor da compra: \n");
	scanf("%f", &valor);
	
	if (valor <= 100){
		printf("R$%.2f\n", valor);
		printf("Sem desconto!");
	}else if(valor > 100 && valor <= 500){
		printf("R$%2.f\n", valor);
		desc = (valor * 0.05);
		valor =  valor - desc;
		printf("5%% de desconto!\n");
		printf("R$%.2f\n", desc);
		printf("R$%.2f\n", valor);
	}else if(valor > 500){
		printf("R$%.2f\n", valor);
		desc = (valor * 0.10);
		valor =  valor - desc;	
		printf("10%% de desconto!\n");
		printf("R$%.2f\n", desc);
		printf("R$%.2f\n", valor);
	}
	
	return 0;
}
