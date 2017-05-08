#include <stdio.h>
#include "Header.h"

CasaPtr CriaCasa(int aldeia, boolean parede)
{
	CasaPtr casa;
	casa = (CasaPtr)malloc(sizeof(Casa));
	casa->recurso = RandomChar();
	casa->jogador = NullPlayer;
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

PlayerPtr CriaPlayer(char* nome, PlayerPtr jogador,int argila, int madeira, int ovo) 
{
	jogador = (Player*)malloc(sizeof(jogador));
	jogador->nome = nome;
	jogador->argila = argila;
	jogador->madeira = madeira;
	jogador->ovo = ovo;
	
	return jogador;
}

//"Main"
void Jogo()
{
	CasaPtr *tabuleiro[BOARDSIZE][BOARDSIZE];
	CasaPtr casa;

	//Inicia o Tabuleiro
	for (int i = 0; i < BOARDSIZE; i++)
	{
		for (int j = 0; j < BOARDSIZE; j++)
		{
			tabuleiro[i][j]=CriaCasa(0, false);
		}
	}

	for (int i = 0; i < BOARDSIZE; i++)
	{
		for (int j = 0; j < BOARDSIZE; j++)
		{
			casa = tabuleiro[i][j];
			printf("%c",casa->recurso);
		}
		printf("\n");
	}


	getchar();
}