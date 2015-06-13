#pragma once
#include "VendaVista.h"
#include <sstream>
class VendaPrazo : public VendaVista
{
private:
	int nrParcelas;
public:
	VendaPrazo(int, string, string, int, int, int, double, int);
	~VendaPrazo();
	double venda();
	string parcelas();
	string printDados();
};

