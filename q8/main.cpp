#include <iostream>

int summation(int start, int end);

int main()
{
    int start, end;

    std::cout << "Digite o início: ";
    std::cin >> start;

    std::cout << "Digite o fim: ";
    std::cin >> end;

    std::cout << "Resultado: " << summation(start, end) << std::endl;
    return 0;
}

/// @brief Calcula a soma dos números de um intervalo
/// @param start
/// @param end
/// @return
int summation(int start, int end)
{
    if (start == end)
    {
        return start;
    }

    return start + summation(start + 1, end);
}
