#include "TPessoa.h"


TPessoa::TPessoa(int cod, string n, string c)
{
	codigo = cod;
	nome = n;
	cidade = c;
}


TPessoa::~TPessoa()
{
}

string TPessoa::getPessoa()
{
	ostringstream AUX;

	AUX << "Codigo: " << codigo << endl;
	AUX << "Nome: " << nome << endl;
	AUX << "Cidade: " << cidade << endl;

	return AUX.str();
}

int TPessoa::getCodigo()
{
	return codigo;
}