#include "TData.h"


TData::TData(int d, int m, int a)
{
	if (d < 1 || d > 31 || m < 1 || m > 12)
	{
		dia = 0;
		mes = 0;
		ano = 0;
	}
	else
	{
		dia = d;
		mes = m;
		ano = a;
	}
}


TData::~TData()
{
}

string TData::getData()
{
	ostringstream AUX;

	AUX << "Data: " << dia << "/" << mes << "/" << ano << endl;

	return AUX.str();
}
