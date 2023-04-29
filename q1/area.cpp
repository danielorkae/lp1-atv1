#include "area.hpp"

float rectangle_area(float base, float height)
{
    return base * height;
}

float square_area(float side)
{
    return rectangle_area(side, side);
}

float circle_area(float radius)
{
    return radius * radius * 3.1415f;
}

float triangle_area(float base, float height)
{
    return (base * height) / 2;
}
