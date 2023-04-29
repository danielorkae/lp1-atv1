#include <iostream>
#include <string>
#include <cstring>
#include "area.cpp"

using namespace std;

bool validate_args(int argc, char *argv[]);
void map_operation(char *operation, char *params[]);

int main(int argc, char *argv[])
{
    if (!validate_args(argc, argv))
    {
        return 1;
    }

    map_operation(argv[1], argv + 2);

    return 0;
}

bool validate_args(int argc, char *argv[])
{
    if (argc < 3)
    {
        cout << "Modo de usar: " << argv[0] << " <forma> <parametros>" << endl;
        cout << "Formas disponiveis: " << endl;
        cout << "  q <lado>          - Área do quadrado" << endl;
        cout << "  r <base> <altura> - Área do retângulo" << endl;
        cout << "  c <raio>          - Área do círculo" << endl;
        cout << "  t <base> <altura> - Área do triângulo" << endl;
        return false;
    }

    return true;
}

void map_operation(char *operation, char *params[])
{
    if (strcasecmp(operation, "retangulo") == 0)
    {
        cout << "Area do quadrado: " << square_area(atof(params[0])) << endl;
        return;
    }

    if (strcasecmp(operation, "r") == 0)
    {
        if (params[0] == NULL || params[1] == NULL)
        {
            cout << "Modo de usar: " << operation << " <base> <altura>" << endl;
            return;
        }

        cout << "Area do retangulo: " << rectangle_area(atof(params[0]), atof(params[1])) << endl;
        return;
    }

    if (strcasecmp(operation, "c") == 0)
    {
        cout << "Area do circulo: " << circle_area(atof(params[0])) << endl;
        return;
    }

    if (strcasecmp(operation, "t") == 0)
    {
        if (params[0] == NULL || params[1] == NULL)
        {
            cout << "Modo de usar: " << operation << " <base> <altura>" << endl;
            return;
        }

        cout << "Area do triangulo: " << triangle_area(atof(params[0]), atof(params[1])) << endl;
        return;
    }
}
