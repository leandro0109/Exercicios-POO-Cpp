// Exer5 grupo POO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  A câmara municipal de uma cidade deseja fazer uma pesquisa entre os seus
// habitantes.Faça um programa para recolher dados sobre o rendimento e número
// de filhos por cada agregado familiar e após as leituras, escrever:
// • Média de rendimento dos agregados familiares.
// • Média do número de filhos.
// • Maior rendimento no total de agregados familiares.
// • Menor rendimento no total de agregados familiares.
// • A percentagem de agregados familiares sem filhos.
// • Percentagem de agregados familiares com rendimento menor que 900€.
// Crie a(s) classe(s) com os atributos e os métodos necessários para implementar o
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
