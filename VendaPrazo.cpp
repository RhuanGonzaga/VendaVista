#include "VendaPrazo.h"


VendaPrazo::VendaPrazo(int cod, string n, string c, int d, int m, int a, double v, int p): VendaVista(cod, n, c, d, m, a, v)
{
	nrParcelas = p;
}


VendaPrazo::~VendaPrazo()
{
}

double VendaPrazo::venda()
{
	return (getValor() / 100 * 20 + getValor());
}

string VendaPrazo::parcelas()
{
	ostringstream AUX;
	AUX << nrParcelas << " parcelas de: " << venda() / nrParcelas;
	
	return AUX.str();
}

string VendaPrazo::printDados()
{
	return VendaVista::printDados() + "\n" + parcelas();
}

