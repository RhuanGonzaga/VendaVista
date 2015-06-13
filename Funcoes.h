void mostraVendas(vector<VendaVista*> V)
{

	for (int i = 0; i < V.size(); i++)
		cout << V[i]->printDados() << endl << endl;
}

double somatoria(vector<VendaVista*> V)
{
	double soma = 0;
	for (int i = 0; i < V.size(); i++)
		soma = soma + V[i]->venda();

	return soma;
}

void consultaCodigo(vector<VendaVista*> V)
{
	int i, codigo;
	cout << "Informe o codigo: ";
	cin >> codigo;

	for (i = 0; i < V.size(); i++)
	{
		if (codigo == V[i]->getCodigo())
			cout << V[i]->printDados() << endl << endl;
		else
			cout << "Nenhum registro encontrado" << endl;
	}
}