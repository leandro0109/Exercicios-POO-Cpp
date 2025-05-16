#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Ponto3D
{
	double X, Y, Z;

public: 
	Ponto3D(double x, double y, double z)
	{
		X = x;
		Y = y;
		Z = z;
	}

	// ______________________________________________________________________
	// Mostrar coordenadas ponto
	void mostrar()
	{
		cout << "\n\tCoordenadas do ponto:	" << X << ", " << Y << ", " << Z << endl;
	}

	// Alterar as coordenadas do ponto
	void alterarPara(double novox, double novoy, double novoz)
	{
		X = novox;
		Y = novoy;
		Z = novoz;
	}

	// A distância entre dois pontos A = (xA, yA, zA) e o ponto B = (xB, yB, zB) no espaço
	// é dada pela seguinte fórmula:

	// dAB = raizQuadrada((xB - xA)^2 + (yB - yA)^2 + (zb - zA)^2
	double distancia(Ponto3D p)
	{
		return sqrt(pow((p.X - X), 2) + pow((p.Y - Y), 2) + pow((p.Z - Z), 2));
	}
};

