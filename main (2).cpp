#include <iostream>

int main()
{
    float x, y;
    std::cout << "Ingrese los valores de x e y: ";
    std::cin >> x >> y;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    x = x + y;
    std::cout << "x + y = " << x;
    return 0;
}
