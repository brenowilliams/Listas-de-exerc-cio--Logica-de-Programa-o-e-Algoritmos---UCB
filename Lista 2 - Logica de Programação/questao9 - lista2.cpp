#include <stdio.h>
#include<string.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float altura, peso_ideal_H, peso_ideal_M;
	char sexo[10];
	
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	printf("Digite seu sexo (masculino ou feminino): \n");
	scanf("%s", &sexo);
	
	int sexoM = strcmp(sexo, "masculino");
	int sexoF = strcmp(sexo, "feminino");
	
	if(sexoM == 0){
		peso_ideal_H = (72.7 * altura - 58);
		printf("Seu peso ideal é: %.2fkg", peso_ideal_H);
	} else if(sexoF == 0){
		peso_ideal_M = (62.1 * altura) - 44.7;
		printf("Seu peso ideal é: %.2fkg", peso_ideal_M);
 	}else{
 		printf("Você digitou errado o seu sexo, por favor escreva 'maculino' ou 'feminino'");
	}
	

	return 0;		
}
