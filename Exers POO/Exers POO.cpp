// Exers POO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

// Class em C++
// Especifica��es ou modificadores de acesso
// public - Os membros da classe s�o acessiveis (visiveis) fora da classe
// private - N�o s�o acessiveis de fora da classe. T�m que ser manipulados atrav�s de fun��es dentro da classe

class Carro
{
public:	// Atributos e fun��es public s�o acessiveis fora da classe
	string marca;
	string modelo;
	int anoFabrico;

	// Fun��es que definem o comportamento 
	void mover()
	{
		cout << "\n\tEste " << marca << " est� em movimento" << endl;
	}

	void parar()
	{
		cout << "\n\tEste " << marca << " est� parado" << endl;
	}

	// Para as fun��es definidas fora da classe � necessario colocar o pr�totipo dessas fun��es
	void travar();
	float autonomia(float consumo100, float litros);
};

// Defini��o de fun��es da classe fora da classe 
void Carro::travar()
{
	cout << "\n\tEste " << marca << " est� a travar" << endl;
}

// Fun��o com passagem de par�metros e com valor de retorno
float Carro::autonomia(float consumo100, float litros)
{
	float autonomia = litros * 100 / consumo100;
	return autonomia;
}

int main()
{
	SetConsoleOutputCP(1252);
	// Criar um objeto carro1 - Inst�ncia da classe Carro (reserva espa�o em mem�ria para conter todos os elementos da classe)
	Carro carro1;
	// Preencher os atributos
	carro1.marca = "Seat";
	carro1.modelo = "Ibiza";
	carro1.anoFabrico = 2015;
	carro1.mover();
	carro1.parar();
	cout << "\n\t" << carro1.marca << "\t" << carro1.modelo << "\t" << carro1.anoFabrico << endl;

	Carro carro2;
	carro2.marca = "Ford";
	carro2.modelo = "Mustang";
	carro2.anoFabrico = 1967;
	carro1.mover();
	carro1.parar();
	cout << "\n\t" << carro2.marca << "\t" << carro2.modelo << "\t" << carro2.anoFabrico << endl;
	cout << "\n\tEste " << carro2.marca << " tem autonomia para " << carro2.autonomia(8, 35) << "Km" << endl;

	return 0;
}
