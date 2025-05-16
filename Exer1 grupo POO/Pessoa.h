#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Pessoa
{
	string nome;
	int anoNascimento;

public:
	void setDados(string nom, int anoNasc)
	{
		nome = nom;
		anoNascimento = anoNasc;
	}

	void mostrarDados(tm dataTempo)
	{
		cout << "\n\tNome\t" << nome << "\n\tAno Nascimento\t" << anoNascimento << "\n\tIdade:\t" << (dataTempo.tm_year + 1900) - anoNascimento;;
	}
};

