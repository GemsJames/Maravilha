#pragma once

#define BOARDSIZE 8

typedef enum { false, true } boolean;

typedef struct Player{
	int madeira;
	int argila;
	int ovo;
	char* nome;
	int xcasa;
	int ycasa;
}Player, *PlayerPtr;

typedef struct Casa {
	char recurso;
	boolean parede;
	int aldeia;
	Player jogador;
}Casa, *CasaPtr;

static const struct Player NullPlayer;

void Jogo();
CasaPtr CriaCasa(int aldeia, boolean parede);
char RandomChar();
PlayerPtr CriaPlayer(char* nome, PlayerPtr *jogador, int argila, int madeira, int ovo, int xcasa, int ycasa);