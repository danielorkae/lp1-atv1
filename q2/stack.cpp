#include <iostream>
#include "stack.hpp"

/// @brief Adiciona um elemento ao final da pilha.
/// @param s A pilha.
/// @param value O elemento a ser adicionado.
void stack_push(vector<int> &s, int value)
{
    s.push_back(value);
}

/// @brief Retorna o último elemento da pilha.
/// @param s A pilha.
/// @return O último elemento da pilha.
int stack_get(vector<int> &s)
{
    int value = s[s.size() - 1];
    s.erase(s.end() - 1);
    return value;
}
