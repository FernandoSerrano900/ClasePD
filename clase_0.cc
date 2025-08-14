#include <iostream>

#include <cmath>

int CalcularSuma(int x, int y)
{
    return x + y;
}

float CalcularAreaCirculo(float radio)
{
    float area;
    const float kPi= 3.1416;

    area =  kPi * std::pow(radio, 2);

    return round (area*100) / 100;
}

int main()
{
    float radio;

    float area;

    int resultado = CalcularSuma(5, 10);
    std::cout << "La suma es: " << resultado << std::endl;

    std::cout << "Ingrese el radio del circulo" << std::endl;
    std::cin >> radio;

    area = CalcularAreaCirculo(radio);

    std::cout << "El area del circulo es: " << area << std::endl;

    return 0;
}
