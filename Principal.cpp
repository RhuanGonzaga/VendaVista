#include <iostream>
#include <string>
#include <vector>
#include "VendaPrazo.h"
#include "Funcoes.h"
#include "Error.h"

VendaVista *VV = NULL;
VendaPrazo *VP = NULL;
vector<VendaVista*> vetor;

void main()
{
	int op,codigo,dia,mes,ano;
	string nome, cidade;
	double valor;
	do{
		try
		{
			system("cls");
			cout << "1. Cadastrar compra a vista" << endl;
			cout << "2. Cadastrar compra a prazo" << endl;
			cout << "3. Mostrar vendas" << endl;
			cout << "4. Soma das vendas" << endl;
			cout << "5. Consulta por codigo" << endl;
			cout << "6. Sair" << endl;
			cout << "Sua opcao: ";
			cin >> op;

			switch (op)
			{
			case 1:

			

					cout << "Codigo: ";
					cin >> codigo;
					cout << "Nome: ";
					cin >> nome;
					cout << "Cidade: ";
					cin >> cidade;
					cout << "Dia: ";
					cin >> dia;
					cout << "Mes: ";
					cin >> mes;
					cout << "Ano: ";
					cin >> ano;
					cout << "Valor: ";
					cin >> valor;

				VV = new VendaVista(codigo, nome, cidade, dia, mes, ano, valor);
				vetor.push_back(VV);
				cout << "Gravado!" << endl;
				break;

			case 2:
				VP = new VendaPrazo(123, "Renato", "Lambari", 6, 10, 1990, 0, 5);
				vetor.push_back(VP);
				cout << "Gravado!" << endl;
				break;

			case 3:
				mostraVendas(vetor);
				break;
		
			case 4:
				cout << "Soma das vendas: " << somatoria(vetor) << endl;
				break;

			case 5:
				consultaCodigo(vetor);
				break;
			}
			system("pause");
		}
		catch (Error e)
		{
			cout << e.what();
			system("pause");
		}
	} while (op != 6);
}