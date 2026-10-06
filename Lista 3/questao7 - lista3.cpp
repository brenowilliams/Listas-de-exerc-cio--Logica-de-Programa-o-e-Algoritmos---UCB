#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float cel, fah;
	
	printf("Digite uma temperatura em graus Celsius: \n");
	scanf("%f", &cel);
	
	fah =  cel * 1.8 + 32;

	printf("A temperatura em graus Fahrenheit é: %.2f", fah);
	
	return 0;
}
