#include <stdio.h>
#include "Header.h"

CasaPtr CriaCasa(int aldeia, boolean parede)
{
	CasaPtr casa;
	casa = (CasaPtr)malloc(sizeof(Casa));
	casa->recurso = RandomChar();
	casa->parede = parede;
	casa->aldeia = aldeia;

	return casa;
}

char RandomChar() 
{
	int r = rand() % 3;
	switch (r)
	{
	case 0:
		return 'a';
	case 1:
		return 'm';
	case 2:
		return 'o';
	}
}


PlayerPtr CriaPlayer(PlayerPtr jogador) 
{
	jogador = (Player*)malloc(sizeof(jogador));
	return jogador;
}

//Muda um Jogador com os argumentos fornecidos
PlayerPtr MudaPlayer(char nome, PlayerPtr jogador,int argila, int madeira, int ovo, int xcasa, int ycasa) 
{
	jogador->nome = nome;
	jogador->argila = argila;
	jogador->madeira = madeira;
	jogador->ovo = ovo;
	jogador->xcasa = xcasa;
	jogador->ycasa = ycasa;

	return jogador;
}

//"Main"
void Jogo()
{
	CasaPtr *tabuleiro[BOARDSIZE][BOARDSIZE];
	CasaPtr casa;
	
	PlayerPtr player1 = CriaPlayer(player1);
	PlayerPtr player2 = CriaPlayer(player2);


	//Inicia o Tabuleiro
	for (int i = 0; i < BOARDSIZE; i++)
	{
		for (int j = 0; j < BOARDSIZE; j++)
		{
			tabuleiro[i][j]=CriaCasa(0, false);
		}
	}


	//Cria os jogadores
	player1 = MudaPlayer('A', player1, 2, 3, 4, 0, 0);
	player2 = MudaPlayer('Z', player2, 2, 3, 4, BOARDSIZE - 1, BOARDSIZE - 1); //a e z sao nomes temporarios


	






	//TESTES
	for (int i = 0; i < BOARDSIZE; i++)
	{
		for (int j = 0; j < BOARDSIZE; j++)
			printf("===");
		printf("=\n");

		for (int j = 0; j < BOARDSIZE; j++)
		{
			casa = tabuleiro[i][j];
			printf("%c",casa->recurso);
			printf("%c", casa->aldeia);
		}
		printf("\n");
	}

	getchar();
}