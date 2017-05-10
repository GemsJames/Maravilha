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

//Cria Jogador
PlayerPtr CriaPlayer() {
	PlayerPtr jogador = (PlayerPtr)malloc(sizeof(Player));
	return jogador;
}

//Muda um Jogador com os argumentos fornecidos
PlayerPtr MudaPlayer(char nome, PlayerPtr jogador, int argila, int madeira, int ovo, int xcasa, int ycasa)
{
	jogador->nome = nome;
	jogador->argila = argila;
	jogador->madeira = madeira;
	jogador->ovo = ovo;
	jogador->xcasa = xcasa;
	jogador->ycasa = ycasa;

	return jogador;
}

//Mexe o plaayer para a casa desejada
PlayerPtr MexePlayer(char choose, PlayerPtr jogador)
{
	switch (choose)
	{
	case 'W':
		if (jogador->ycasa == 0)
			return false;
		else
			jogador->ycasa--;
		return true;
	case 'A':
		if (jogador->xcasa == 0)
			return false;
		else
			jogador->xcasa--;
		return true;
	case 'S':
		if (jogador->ycasa == BOARDSIZE)
			return false;
		else
			jogador->ycasa++;
		return true;
	case 'D':
		if (jogador->xcasa == BOARDSIZE)
			return false;
		else
			jogador->xcasa++;
		return true;

	}
}