#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite a idade: \n");
	scanf("%d", &idade);
	
	if (idade <= 12){
		printf("Criança!");
	}else if(idade >= 13 && idade <= 17){
		printf("Adolecente!");
	}else if(idade >= 18 && idade <= 59){
		printf("Adulto!");
	}else{
		printf("Idoso!");
	}
	
	return 0;
}
