#pragma once
#include <string>
#include <exception>
using namespace std;
class Error: public exception
{
public:
	Error();
	~Error();

};

