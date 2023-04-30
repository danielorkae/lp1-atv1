#include <iostream>
#include <sstream>
#include "header.hpp"

using namespace std;

int main()
{
    map<string, AvaliationAverage> averages;

    while (true)
    {
        cout << "--- Menu ---" << endl;
        cout << "1. Adicionar aluno" << endl;
        cout << "2. Mostrar média de todos alunos" << endl;
        cout << "3. Sair" << endl;
        cout << "Opção: ";

        int option;
        cin >> option;
        cin.ignore();

        route_action(option, averages);
    }

    return 0;
}

/// @brief Direciona a ação com base na opção do menu.
/// @param option A opção do menu
/// @param avrgs Mapa de médias
void route_action(int option, map<string, AvaliationAverage> &avrgs)
{
    switch (option)
    {
    case 1:
        add_student(avrgs);
        break;
    case 2:
        show_all(avrgs);
        break;
    case 3:
        exit(0);
    default:
        cout << "Opção inválida!" << endl;
    }
}

/// @brief Solicita ao usuário um novo aluno e o adiciona ao mapa
/// @param avrgs Mapa de médias
void add_student(map<string, AvaliationAverage> &avrgs)
{
    string name;
    float av1, av2, av3, avrg;

    cout << endl
         << "--- Adicionar Aluno ---" << endl;
    cout << "Nome do aluno: ";
    getline(cin, name);

    cout << "Nota da AV1: ";
    cin >> av1;
    cin.ignore();

    cout << "Nota da AV2: ";
    cin >> av2;
    cin.ignore();

    cout << "Nota da AV3: ";
    cin >> av3;
    cin.ignore();

    avrg = (av1 + av2 + av3) / 3;

    avrgs[name] = {av1, av2, av3, avrg};

    cout << "Aluno adicionado com sucesso!" << endl;
}

/// @brief Mostra a média de todos os alunos
/// @param avrgs Mapa de médias
void show_all(map<string, AvaliationAverage> &avrgs)
{
    float overall_avrg = 0;

    cout << endl
         << "--- Médias ---" << endl;
    for (auto &avrg : avrgs)
    {
        cout << avrg.first << ": " << avrg.second.avrg << endl;
        overall_avrg += avrg.second.avrg;
    }

    overall_avrg /= avrgs.size();

    cout << "Média geral: " << overall_avrg << endl;
}
