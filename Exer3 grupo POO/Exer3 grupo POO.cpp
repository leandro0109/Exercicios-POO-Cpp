// Exer3 grupo POO.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Elabore um programa que receba o nome e a idade de três pessoas e indique o
// nome da pessoa que possui a maior idade.
// a) Deverá usar uma classe para representar uma pessoa, tendo como propriedades
// o nome e a idade.
// b) A classe deverá poder apresentar os dados da pessoa em questão.
// c) Implemente dois construtores : um que não recebe parâmetros e outro que irá
// receber o nome e a idade de uma pessoa.

#include <iostream>
#include <Windows.h>
#include "Pessoa.h"
#include <string>

using namespace std;

int main()
{
    SetConsoleOutputCP(1252);

    Pessoa pessoas[3];
    string nome;
    int idade;

    for (int i = 0; i < 3; i++)
    {
        cout << "\n\tInsira o nome da pessoa nº" << i + 1 << ":     ";
        getline(cin, nome);
        cout << "\n\tInsira a idade da pessoa nº" << i + 1 << ":     ";
        cin >> idade;
        cin.ignore(100, '\n');
        pessoas[i].setDados(nome, idade);
    }

    return 0;
}
