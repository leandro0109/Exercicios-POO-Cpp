// Carro Encapsulamento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

class Carro
{
private:    // membros private n�o s�o acessiveis de fora da classe 
    string marca;
    string modelo;
    int anoFabrico;

	float autonomia(float consumo100, float litros)
	{
		return litros * 100 / consumo100;
	}

public: // Fun��es acessiveis fora da classe

	// O construtor da classe � uma fun��o especial que tem o nome da classe e � chamado 
	// automaticamente quando o objeto � instanciado 
	// O construtor tem que ser public
	// Construtor sem parametros
	Carro()
	{
		cout << "\n\tCriou um carro novo" << endl;
	}

	// Construtor parametrizado
	Carro(string marc, string model, int ano)
	{
		marca = marc;
		modelo = model;
		anoFabrico = ano;
	}

	void mover()
	{
		cout << "\n\tEste " << marca << " est� em movimento" << endl;
	}

	void parar()
	{
		cout << "\n\tEste " << marca << " est� parado" << endl;
	}

	// Fun��es para retornar o valor armazenado nos atributos
	string getMarca()
	{
		return marca;
	}

	string getModelo()
	{
		return modelo;
	}

	int getAnoFabrico()
	{
		return anoFabrico;
	}

	void mostrarDadosCarro(float consumo100, float litros)
	{
		cout << "\n\tEste " << marca << " do ano " << anoFabrico << " tem autonomia para " << autonomia(consumo100, litros) << "Km" << endl;
	} 
};

int main()
{
    Carro carro1;
	Carro carro2("Ford", "Mustang", 1967);
	cout << "\n\t" << carro2.getMarca() << "\t" << carro2.getModelo() << "\t" << carro2.getAnoFabrico() << endl;

	carro1.mover();
	carro1.parar();
	carro2.mostrarDadosCarro(9, 45);
}
