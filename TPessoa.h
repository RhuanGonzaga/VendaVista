#pragma once
#include <string>
#include <sstream>
using namespace std;
class TPessoa
{
private:
	int codigo;
	string nome;
	string cidade;
public:
	TPessoa(int, string, string);
	~TPessoa();
	string getPessoa();
	int getCodigo();
};

