#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int matricula;
	float n1, n2, n3, me, media;
	
	printf("Digite a sua matrícula:\n");
	scanf("%d", &matricula);
	printf("Digite a sua nota1, nota2, nota3 e a média do execícios:\n");
	scanf("%f %f %f %f", &n1, &n2, &n3, &me);
	
	media = (n1 + (n2  * 2) + (n3 * 3) + me) / 7;
	
	printf("Matrícula: %d\n", matricula);
	printf("Nota 1: %.2f\n", n1);
	printf("Nota 2: %.2f\n", n2);
	printf("Nota 3: %.2f\n", n3);
	printf("Média dos Exercícios: %.2f\n", me);
	printf("Média de Aproveitamento: %.2f\n", media);
	
	if(media < 4){
		printf("Conceito obtido: E\n");
		printf("REPROVADO.");	
	}else if(media >= 4 && media < 6){
		printf("Conceito obtido: D\n");
		printf("REPROVADO.");
	}else if(media >= 6 && media < 7.5){
		printf("Conceito obtido: C\n");
		printf("APROVADO.");
	}else if(media >= 7.5 && media < 9){
		printf("Conceito obtido: B\n");
		printf("APROVADO.");
	}else if(media >= 9){
		printf("Conceito obtido: A\n");
		printf("APROVADO.");
	}
	
	
	return 0;
}
