#include "VendaVista.h"


VendaVista::VendaVista(int cod, string n, string c, int d, int m, int a, double v)
{
	if (v <= 0)
		throw (Error());
	pessoa = new TPessoa(cod, n, c);
	data = new TData(d, m, a);
	valor = v;
}


VendaVista::~VendaVista()
{
}

double VendaVista::venda()
{
	return (valor - ( valor / 100 * 5));
}

double VendaVista::getValor()
{
	return valor;
}

int VendaVista::getCodigo()
{
	return pessoa->getCodigo();
}

string VendaVista::printDados()
{
	stringstream s1;
	s1 << venda();
	return pessoa->getPessoa() + data->getData() + "Valor: " + s1.str();
}

string VendaVista::error(int c)
{
	if (c == 001)
		return "Valor igual a 0";
	else if (c == 002)
		return "Valor menor que 0";
	else
		return "Erro desconhecido";
}