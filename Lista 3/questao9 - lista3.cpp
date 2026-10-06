#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float km, litros, consumo;
	
	printf("Digite a distância em quilômetros e a quantidade de combustível utilizada em litros: \n");
	scanf("%f %f", &km, &litros);
	
	consumo =  km / litros;

	printf("O consumo médio em km/L é:\n%.2f km/L", consumo);
	
	return 0;
}
