#include <stdio.h>
#include <string.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20], sexo[5], estado_civil[10];
	int tempo_de_casamento;
	
	printf("Digite seu nome:\n");
	scanf("%s", nome);
	printf("Digite seu sexo(F ou M):\n");
	scanf("%s", sexo);
	printf("Digite seu estado civil (casado ou solteiro):\n");
	scanf("%s", estado_civil);
	
	int resultadoSexo = strcmp(sexo, "F");
	int resultadoEstado_civil = strcmp(estado_civil, "casado");
	if(resultadoSexo == 0 && resultadoEstado_civil == 0){
		printf("Digite quantos anos de casamento você tem:\n");
		scanf("%d", &tempo_de_casamento);
	
	}
	//if(strcmp(sexo, "F") == 0 && strcmp(estado_civil, "casado") == 0){
//		printf("Digite quantos anos de casamento você tem:\n");
//		scanf("%d", &tempo_de_casamento);
//	} não consegui fazer desta forma
	
	
	return 0;
}
