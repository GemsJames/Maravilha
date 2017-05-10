#include <stdio.h>
#include "Header.h"

//"Main"
void Jogo()
{
	CasaPtr *tabuleiro[BOARDSIZE][BOARDSIZE];
	CasaPtr casa;
	
	PlayerPtr player1 = CriaPlayer();
	PlayerPtr player2 = CriaPlayer();


	//Inicia o Tabuleiro
	for (int i = 0; i < BOARDSIZE; i++)
	{
		for (int j = 0; j < BOARDSIZE; j++)
		{
			tabuleiro[i][j]=CriaCasa(0, false);
		}
	}

	//Cria os jogadores
	player1 = MudaPlayer("A", player1, 2, 3, 4, 0, 0);
	player2 = MudaPlayer("Z", player2, 2, 3, 4, BOARDSIZE - 1, BOARDSIZE - 1); //a e z sao nomes temporarios


	






	//TESTES
	for (int i = 0; i < BOARDSIZE; i++)
	{
		for (int j = 0; j < BOARDSIZE; j++)
			printf("===");
		printf("=\n");

		for (int j = 0; j < BOARDSIZE; j++)
		{
			casa = tabuleiro[i][j];
			printf("|%c",casa->recurso);
			printf("%c", casa->aldeia);
		}
		printf("|\n");
	}

	getchar();
}