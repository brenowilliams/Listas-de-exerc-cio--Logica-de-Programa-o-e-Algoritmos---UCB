#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float preco, valor_final;
	int codigo;
	
	printf("Digite o preço do produto:\n");
	scanf("%f", &preco);
	printf("Digite o código de forma de pagamento:\n");
	scanf("%d", &codigo);
	

	if(codigo == 1){
		valor_final =  preco  - (preco * 0.10);
		printf("O valor a ser pago é R$ %.2f", valor_final);
	}else if(codigo == 2){
		valor_final =  preco  - (preco * 0.15);
		printf("O valor a ser pago é R$ %.2f", valor_final);
	}else if(codigo == 3){
		printf("O valor a ser pago é R$ %.2f", preco);
	}else if(codigo == 4){
		valor_final =  preco + (preco * 0.10);
		printf("O valor a ser pago é R$ %.2f", valor_final);
	}
	
	return 0;
}
