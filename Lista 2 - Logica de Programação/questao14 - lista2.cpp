#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int codigo;
	
	printf("----------- CARDÁPIO ----------\n");
	printf("\n");
	printf("1 - Hambúrguer com fritas\n");
	printf("2 - Filé de frango grelhado\n");
	printf("3 - Lasanha à bolonhesa\n");
	printf("4 - Filé de peixe com arroz\n");
	printf("5 - Salada especial\n");
	printf("\n");
	printf("------------------------------\n");
	printf("\n");
	printf("Digite o código do pedido: \n");
	scanf("%d", &codigo);
	
	switch(codigo)
	{
		case 1:
			printf("Hambúrguer com fritas\n");
			printf("R$ 28,00");
			break;
		
		case 2:
			printf("Filé de frango grelhado\n");
			printf("R$ 32,00");
			break;	
			
		case 3:
			printf("Lasanha à bolonhesa\n");
			printf("R$ 35,00");
			break;	
		
		case 4:
			printf("Filé de peixe com arroz\n");
			printf("R$ 42,00");
			break;
			
		case 5:
			printf("Salada Especial\n");
			printf("R$ 25,00");
			break;
			
		default:
			printf("Opção inválida");
			break;
	}


	
	
	return 0;
}
