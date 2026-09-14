#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	printf("Digite seu peso: \n")/
	scanf("%f", &peso);
	
	imc = peso / pow(altura, 2);
	
	if( imc < 18.5){
		printf("Seu IMC é %.2f e isto significa que você está abaixo do peso!", imc);
	}else if( imc >= 18.5 && imc < 25){
		printf("Seu IMC é %.2f e isto significa que você está com o peso normal!", imc);
	}else if( imc >= 25 && imc < 30){
		printf("Seu IMC é %.2f e isto significa que você está acima do peso!", imc);
	}else{
		printf("Seu IMC é %.2f e isto significa que você está obeso!", imc);
	}
	
	
	return 0;		
}
