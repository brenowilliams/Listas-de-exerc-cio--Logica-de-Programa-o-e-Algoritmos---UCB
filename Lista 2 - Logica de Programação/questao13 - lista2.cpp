#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF-8");
	setlocale(LC_ALL, "Portuguese");
	
	int velocidade_max, velocidade_resgistrada, infracaoMedia, infracaoGrave, percentual;
	
	printf("Digite a velocidade da via:\n");
	scanf("%d", &velocidade_max);
	printf("Digite a velocidade registrada do seu veículo:\n");
	scanf("%d", &velocidade_resgistrada);
	
	printf("O limite da via é %dkm/h.\n", velocidade_max);
	printf("A velocidade registrada é %dkm/h.\n", velocidade_resgistrada);
	
	infracaoMedia = velocidade_max + (velocidade_max * 0.20);
	infracaoGrave = velocidade_max + (velocidade_max * 0.50);
	
	if(velocidade_resgistrada <= velocidade_max){
		printf("Não houve infração!");
	}else if(velocidade_resgistrada > velocidade_max && velocidade_resgistrada <= infracaoMedia){
		
		percentual = ((velocidade_resgistrada * 100) / velocidade_max) - 100;
		
		printf("O veículo excedeu a velocidade da via em %d%%.\n", percentual);
		printf("Infração MÉDIA!");
		
	}else if(velocidade_resgistrada > infracaoMedia && velocidade_resgistrada <= infracaoGrave){
		
		percentual = ((velocidade_resgistrada * 100) / velocidade_max) - 100;
		
		printf("O veículo excedeu a velocidade da via em %d%%.\n", percentual);
		printf("Infração GRAVE!");
	}else if(velocidade_resgistrada > infracaoGrave && velocidade_resgistrada <= 120){
		percentual = ((velocidade_resgistrada * 100) / velocidade_max) - 100;
		
		printf("O veículo excedeu a velocidade da via em %d%%.\n", percentual);
		printf("Infração GRAVÍSSIMA!");
	}else{
		percentual = ((velocidade_resgistrada * 100) / velocidade_max) - 100;
		
		printf("O veículo excedeu a velocidade da via em %d%%.\n", percentual);
		printf("Alerta de velocidade: EXTREMAMENTE ELEVADA");
	}
	
	
	return 0;
}
