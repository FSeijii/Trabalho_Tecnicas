#pragma once
#include "Personagem.h"
#include <iostream>
using namespace Personagens;
using namespace std;
class Jogador :public Personagem{

private:
	static bool Jogador2;
public:

	Jogador();
	~Jogador();

	void executar();
	void executar2();
	void mover();
	void mover2();

};

