#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	printf("Digite o seu peso e altura: \n");
	scanf("%f %f", &peso, &altura);
	
	imc = peso / pow(altura, 2);
	
	if (imc < 18.5){
		printf("Abaixo do peso!");
	}else if(imc >= 18.5 && imc < 24.9){
		printf("Peso adequado!");
	}else if(imc >= 24.9 && imc <= 29.9){
		printf("Sobrepeso!");
	}else if(imc > 30){
		printf("Obesidade!");
	}
	
	return 0;
}
