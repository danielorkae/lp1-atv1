#include "area.hpp"

// Calcula a área de um retângulo
float rectangle_area(float base, float height)
{
    return base * height;
}

// Calcula a área de um quadrado
float square_area(float side)
{
    return rectangle_area(side, side);
}

// Calcula a área de um círculo
float circle_area(float radius)
{
    return radius * radius * 3.1415f;
}

// Calcula a área de um triângulo
float triangle_area(float base, float height)
{
    return (base * height) / 2;
}
