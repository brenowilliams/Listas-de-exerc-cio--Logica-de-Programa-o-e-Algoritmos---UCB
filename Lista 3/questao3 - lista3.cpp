#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma, sub, mult, div;
	
	printf("Digite dois números: ");
	scanf("%f %f", &n1, &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("%.2f + %.2f = %.2f\n", n1, n2, soma);
	printf("%.2f - %.2f = %.2f\n", n1, n2, sub);
	printf("%.2f x %.2f = %.2f\n", n1, n2, mult);
	printf("%.2f / %.2f = %.2f\n", n1, n2, div);
	
	return 0;
}
