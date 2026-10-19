#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
	char nome_jogo[50], dev_jogo[50], genero_jogo[50];
	int cod_jogo, anoLancamento, plataforma, modo_jogo;
	float preco;
		
} Jogo;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	Jogo jogos[50];
	int opcao;
	int total = 0;
	
	do{
		printf("------- GAME-REGISTRY -------\n");
		printf("1 - Cadastrar \n2 - Consultar \n3 - Listar \n4 - Alterar \n5 - Excluir \n0 - Sair \n");
		printf("----------------------------\n");
		printf("Escolha uma opção: ");
		scanf("%d", &opcao);
		printf("\n");
	
	
	if(opcao == 1){
		int modelo;
		printf("------ Cadastrar Jogo ------\n");
		printf("\n");
		
		printf("Digite o código único - exemplo[101]: ");
		scanf("%d", &jogos[total].cod_jogo);
		
		printf("Digite o nome do Jogo: ");
		scanf("%[^\n]", jogos[total].nome_jogo);
		
		printf("Digite a data de lançamento: ");
		scanf("%d", &jogos[total].anoLancamento);
		
		printf("Digite a desenvolvedora: ");
		scanf("%[^\n]", jogos[total].dev_jogo);
		
		printf("Digite a plataforma: \n 1 - PC \n 2 - Console \n 3 - Mobile\n");
		scanf("%d", &jogos[total].plataforma);
		
		printf("Digite o gênero de jogo: ");
		scanf("%[^\n]", jogos[total].genero_jogo);
		
		printf("Digite o modo de jogo: \n 1 - Single-Player \n 2 - MultIplayer \n 3 - Ambos\n");
		scanf("%d", &jogos[total].modo_jogo);
		
		printf("Digite o modelo do jogo: \n 1 - Free to play \n 2 - Pago\n");
		scanf("%d", &modelo);
		
		if(modelo == 2){
			printf("Digite o valor (R$): ");
			scanf("%f", &jogos[total].preco);
		}else{
			jogos[total].preco = 0;
		}
		total++;
		printf("Jogo cadastrado! Total de jogos cadastrados: %d\n", total);
		
	}else if (opcao ==3){
		printf("\n------ Lista de Jogos ------");
		for (int i = 0; i < total; i++)
			printf("Código [%d] - Jogo: %s - Lançado em %d]n", jogos[i].cod_jogo, jogos[i].nome_jogo, jogos[i].anoLancamento);
			
	}else if(opcao == 0){
		printf("Saindo do programa...\n Obrigado por usar GAME-REGISTRY!");
	}
	
	
}while (opcao != 0);
	
}
