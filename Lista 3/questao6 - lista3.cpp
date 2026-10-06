#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float n1, pi = 3.14159, area;
	
	printf("Digite o raio de um círculo: \n");
	scanf("%f", &n1);
	
	area = pi * pow(n1, 2);

	printf("A áreal do círculo é: %.2f", area);
	
	return 0;
}
