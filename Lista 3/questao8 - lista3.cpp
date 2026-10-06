#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float horas, valor, salbruto;
	
	printf("Digite sua horas trabalhadas e o valor recebido por hora: \n");
	scanf("%f %f", &horas, &valor);
	
	salbruto =  horas * valor;

	printf("A temperatura em graus Fahrenheit é: %.2f", salbruto);
	
	return 0;
}
