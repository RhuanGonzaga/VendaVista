#pragma once
#include <string>
#include <sstream>
using namespace std;
class TData
{
private:
	int dia, mes, ano;
public:
	TData(int, int, int);
	~TData();
	string getData();
};

