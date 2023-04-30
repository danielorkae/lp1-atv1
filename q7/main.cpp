#include <iostream>

int potencia(int base, int expoente);

int main()
{
    int base, expoente;

    std::cout << "Digite a base: ";
    std::cin >> base;

    std::cout << "Digite o expoente: ";
    std::cin >> expoente;

    std::cout << "Resultado: " << potencia(base, expoente) << std::endl;
    return 0;
}

/// @brief Calcula a potência de um número
/// @param base
/// @param expoente
/// @return
int potencia(int base, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }

    return base * potencia(base, expoente - 1);
}
