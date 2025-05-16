// Exer4 grupo POO.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Criar uma classe Ponto3D que representa um ponto no espaço tridimensional, com
// coordenadas X, Y e Z.A classe deve conter os seguintes métodos : Mostrar() - que
// mostrará as coordenadas do ponto, por exemplo(3, 5, -2);
// AlterarPara() – que mudará as coordenadas do ponto;
// 
// Distancia(Ponto3D p2) – que calculará a distância do ponto até outro ponto p2;
// O programa deve criar um vetor de N pontos e solicitar as coordenadas de todos os
// pontos ao utilizador.Após introduzir as coordenadas dos pontos, o programa deve
// calcular e mostrar a distância entre o primeiro ponto e todos os outros pontos.

#include <iostream>
#include <Windows.h>
#include "Ponto3D.h"
#include <vector>
#include <conio.h>

using namespace std;

char menu();
double lerCoordenada(string str);
void lerPontos(vector <Ponto3D>& pontos);
void mostrarCoordenadas(vector<Ponto3D> pontos);
void mostrarTodosPontos(vector<Ponto3D> pontos);
void alterarCoordenadas(vector<Ponto3D>& pontos);
void calcularDistancia(vector<Ponto3D> pontos);

int main()
{
	SetConsoleOutputCP(1252);

	vector <Ponto3D> pontos;
	bool terminar = false;

	lerPontos(pontos);
	do
	{
		switch (menu())
		{
		case '1': mostrarCoordenadas(pontos); break;
		case '2': alterarCoordenadas(pontos); break;
		case '3': calcularDistancia(pontos);  break;
		case '4': mostrarTodosPontos(pontos); break;
		case '5': terminar = true; break;
		}
	} while (!terminar);

	return 0;
}

// ______________________________________________
char menu()
{
	char op;
	do
	{
		cout << "\n\t__________________________________________________" << endl;
		cout << "\t			1 - Mostrar as coordenadas do ponto" << endl;
		cout << "\t			2 - Alterar as coordenadas do ponto" << endl;
		cout << "\t			3 - Calcular Distância" << endl;
		cout << "\t			4 - Mostrar as coordenadas de todos os pontos" << endl;
		cout << "\t			5 - Terminar" << endl;
		cout << "\n\t__________________________________________________" << endl;
		cout << "\n\n\tEscolha uma opção:		";
		op = _getch();
	} while (op < '1' || op > '5');
	return op;
}

// ______________________________________________
double lerCoordenada(string str)
{
	double coord;
	while (true)
	{
		cout << str;
		if (cin >> coord)
			break;
		cin.clear();
		cin.ignore(10, '\n');
	}
	return coord;
}

// ______________________________________________
void lerPontos(vector<Ponto3D>& pontos)
{
	double x, y, z;

	do
	{
		cout << "\n\tInsira as coordenadas:		";
		x = lerCoordenada("\n\tX:	");
		y = lerCoordenada("\n\tY:	");
		z = lerCoordenada("\n\tZ:	");

		pontos.push_back(Ponto3D(x, y, z));
		cout << "\n\tInserir outro ponto (S/N):		";
	} while (toupper(_getch()) == 'S');
}

// ______________________________________________
void mostrarCoordenadas(vector<Ponto3D> pontos)
{
	int p;

	do
	{
		system("cls");
		cout << "\n\tQual o ponto a ver (1 a " << pontos.size() << "):		";
		if (cin >> p && p > 0 && p <= pontos.size())
			break;
		cin.clear();
		cin.ignore(10, '\n');
	} while (true);
	cout << "\n\tCoordenadas do ponto " << p << ":	";
	pontos.at(p - 1).mostrar();
}

// ______________________________________________
void mostrarTodosPontos(vector<Ponto3D> pontos)
{
	system("cls");
	for (Ponto3D coord : pontos)
	{
		cout << "\t";
		coord.mostrar();
	}
}

// ______________________________________________
void alterarCoordenadas(vector<Ponto3D>& pontos)
{
	int p;

	do
	{
		system("cls");
		cout << "\n\tQual o ponto a alterar (1 a " << pontos.size() << "):		";
		if (cin >> p && p > 0 && p <= pontos.size())
			break;
		cin.clear();
		cin.ignore(10, '\n');
	} while (true);
		
	double x, y, z;
	cout << "\n\tInsira as coordenadas:		";
	x = lerCoordenada("\n\tX:	");
	y = lerCoordenada("\n\tY:	");
	z = lerCoordenada("\n\tZ:	");
	pontos.at(p - 1).alterarPara(x, y, z);
}

// ______________________________________________
void calcularDistancia(vector<Ponto3D> pontos)
{
	cout << "\n\tDistância entre o ponto 0 e o ponto ";
	for (int i = 1; i < pontos.size(); i++)
	{
		cout << i << "\n\t = " << pontos[0].distancia(pontos[i]);
	}
}