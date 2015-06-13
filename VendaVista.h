#pragma once
#include "TData.h"
#include "TPessoa.h"
#include "Error.h"
#include <string>
#include <exception>
using namespace std;
class VendaVista
{
private:
	TPessoa *pessoa;
	TData *data;
	double valor;
public:
	VendaVista(int, string, string, int, int, int, double);
	~VendaVista();
	virtual double venda();
	double getValor();
	int getCodigo();
	virtual string printDados();
	string error(int);
};

