#pragma once
#include <iostream>
using namespace std;

class Pessoa
{
	string nome;
	int idade;

public:
	void setDados(string nom, int anos)
	{
		nome = nom;
		idade = anos;
	}

	void mostrarPessoa()
	{
		cout << "\n\tNome:	" << nome << "\n\tIdade:	" << idade << endl;
	}
};

