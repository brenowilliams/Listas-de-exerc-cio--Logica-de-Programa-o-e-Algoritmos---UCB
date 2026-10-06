#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;
	
	printf("Digite suas 3 notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3) / 3;

	printf("A média final é: %.2f", media);
	
	return 0;
}
