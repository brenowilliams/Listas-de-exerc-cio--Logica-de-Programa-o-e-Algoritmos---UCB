#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, area;
	
	printf("Digite a base e a altura de um retângulo: \n");
	scanf("%f %f", &n1, &n2);
	
	area = n1 * n2;

	printf("A áreal do triângulo é %.2f", area);
	
	return 0;
}
