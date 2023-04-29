#include <iostream>
#include "queue.hpp"

/// @brief Adiciona um elemento ao final da fila.
/// @param q A fila.
/// @param value O valor a ser adicionado.
void queue_push(vector<int> &q, int value)
{
    q.push_back(value);
}

/// @brief Retorna o primeiro elemento da fila.
/// @param q A fila.
/// @return O primeiro elemento da fila.
int queue_get(vector<int> &q)
{
    int value = q[0];
    q.erase(q.begin());
    return value;
}
