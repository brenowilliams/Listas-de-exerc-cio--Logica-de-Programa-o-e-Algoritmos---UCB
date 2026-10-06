#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, media;
	
	printf("Digite sua notas: \n");
	scanf("%f %f", &n1, &n2);
	
	media = ((n1 +n2)/2);
	
	if (media >= 7){
		printf("Aprovado!");
	}else if(media >= 5 && media < 7){
		printf("Recuperação!");

	}else if(media < 5){
		printf("Reprovado!");
	}
	
	return 0;
}
