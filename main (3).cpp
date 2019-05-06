#include <iostream>

int main()
{
    float a, b, c, r;
    std::cout << "Ingrese el valor de a: ";
    std::cin >> a ;
    std::cout << "Ingrese el valor de b: ";
    std::cin >> b ;
    std::cout << "Ingrese el valor de c: ";
    std::cin >> c ;
    if (c == 0)
    {
        r = 2*(a + b);
        std::cout << "La figura es un rectangulo, su area es: ";
        std::cout << r;

    }

    else
    {
        r = a + b +c;
        std::cout << "La figura es un triangulo, su perimetro es: ";
        std::cout << r;

    }

    return 0;
}
