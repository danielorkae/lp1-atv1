#include "area.hpp"

/// @brief Calcula a área de um retângulo
/// @param base Tamanho da base
/// @param height Altura
/// @return Área da base do retângulo
float rectangle_area(float base, float height)
{
    return base * height;
}

/// @brief Calcula a área de um quadrado
/// @param side Tamanho do lado
/// @return Área do quadrado
float square_area(float side)
{
    return rectangle_area(side, side);
}

/// @brief Calcula a área de um círculo
/// @param radius Raio do círculo
/// @return Área do círculo
float circle_area(float radius)
{
    return radius * radius * 3.1415f;
}

/// @brief Calcula a área de um triângulo
/// @param base Tamanho da base
/// @param height Altura
/// @return Área do triângulo
float triangle_area(float base, float height)
{
    return (base * height) / 2;
}
