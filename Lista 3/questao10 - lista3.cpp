#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	char produto[10];
	float quantidade, preco, valor;
	
	printf("Digite o nome do produto, quantidade comprada e preço unitário: \n");
	scanf("%s %f %f", &produto, &quantidade, &preco);
	
	valor =  quantidade * preco;

	printf("O valor total das compras é:\nR$%.2f", valor);
	
	return 0;
}
