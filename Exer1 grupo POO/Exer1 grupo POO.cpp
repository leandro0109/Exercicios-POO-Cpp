// Exer1 grupo POO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "Pessoa.h"
#include <string>
using namespace std;

int main()
{
    Pessoa pessoa1;
    string nome;
    int anoNasc;

    time_t tempo = time(NULL);
    struct tm dataTempo;

    localtime_s(&dataTempo, &tempo);
    
    cout << "\n\tInsira o nome da pessoa:   ";
    getline(cin, nome);
    cout << "\n\tInsira o ano nascimento da pessoa:   ";
    cin >> anoNasc;
    pessoa1.setDados(nome, anoNasc);

    system("cls");
    pessoa1.mostrarDados(dataTempo);
    
    cout << "\n\n";
    return 0;
}
