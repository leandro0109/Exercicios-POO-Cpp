// Exer5 grupo POO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  A c�mara municipal de uma cidade deseja fazer uma pesquisa entre os seus
// habitantes.Fa�a um programa para recolher dados sobre o rendimento e n�mero
// de filhos por cada agregado familiar e ap�s as leituras, escrever:
// � M�dia de rendimento dos agregados familiares.
// � M�dia do n�mero de filhos.
// � Maior rendimento no total de agregados familiares.
// � Menor rendimento no total de agregados familiares.
// � A percentagem de agregados familiares sem filhos.
// � Percentagem de agregados familiares com rendimento menor que 900�.
// Crie a(s) classe(s) com os atributos e os m�todos necess�rios para implementar o
// programa.

#include <iostream>
#include "Classes.h"
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1252);

    GerirPesquisa pesquisa;
    pesquisa.lerAgregados();
    cout << endl;

}
