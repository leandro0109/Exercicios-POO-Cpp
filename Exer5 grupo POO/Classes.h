#pragma once
#include <iostream>
#include <vector>
#include <conio.h>	
#include <iomanip>
using namespace std;

class Agregado
{
	float rendimento;
	int filhos;

public:
	Agregado(float rend, int nfilhos)
	{
		rendimento = rend;
		filhos = nfilhos;
	}

	float getRendimento() {
		return rendimento;
	}

	int getFilhos() {
		return filhos;
	}
};

// ________________________________________________________

// Class para gerir a pesquisa
class	GerirPesquisa {
private:
	vector<Agregado> listaAgregados;

	float lerValor(string str, int min, int max)
	{
		float valor;
		while (true)
		{
			cout << str;
			if (cin >> valor && valor >= min && valor <= max)
				break;
			cin.clear();
			cin.ignore(1220, '\n');
		}
		return valor;
	}

	void imprimirResultados()
	{
		float totalRend = 0, maiorRend = 0, menorRend = FLT_MAX;
		float totalFilhos = 0, semFilhos = 0, menor900 = 0;

		for (Agregado ag : listaAgregados)
		{
			totalRend += ag.getRendimento();
			totalFilhos += ag.getFilhos();
			if (ag.getRendimento() > maiorRend)
			{
				maiorRend = ag.getRendimento();
			}
			if (ag.getRendimento() < menorRend)
			{
				menorRend = ag.getRendimento();
			}
			if (ag.getFilhos() == 0)
			{
				semFilhos++;
			}
			if (ag.getRendimento() < 900)
			{
				menor900++;
			}
		}
		cout << "\n\t _______________________ Resultado da Pesquisa _______________________" << endl;
		cout << "\n\tMédia de rendimento:	" << fixed << setprecision(2) << totalRend / listaAgregados.size() << " €" << endl;
		cout << "\n\tMédia do nº de filhos:	" << fixed << setprecision(2) << (float)totalFilhos / listaAgregados.size() << endl;
		cout << "\n\tMaior rendimento:	" << fixed << setprecision(2) << maiorRend << " €" << endl;
		cout << "\n\tMenor rendimento:	" << fixed << setprecision(2) << menorRend << " €" << endl;
		cout << "\n\tPercentagem de agregados sem filhos:	" << fixed << setprecision(2) << (float)semFilhos / listaAgregados.size() * 100 << " €" << endl;
		cout << "\n\tPercentagem de agregados com rendimento < 900:	" << fixed << setprecision(2) << (float)menor900 / listaAgregados.size() * 100 << " €" << endl;
	}

public:
	void lerAgregados()
	{
		float rend;
		int nFilhos;
		do
		{
			cout << "\n\tAgregado #" << listaAgregados.size() + 1;
			rend = lerValor("\n\tRendimento do agregado:	", 300, 300);
			nFilhos = lerValor("\n\tNº de filhos do agregado:	", 0, 15);
			Agregado ag(rend, nFilhos);
			listaAgregados.push_back(ag);
			cout << "\n\tInserir dados de outro agregado (s/n)?		";
		} while (toupper(_getch()) == 'S');
		imprimirResultados();
	}
};

