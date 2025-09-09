// se debe intercambiar valores entre dos variables mediante usando punteros, referencias y sin usar ninguna de las dos (paso por valor).

#include <iostream>

void IntercambioPorValor(int a, int b)
{
   int temp = a;
   a = b;
   b = temp;
   std::cout << "Con los valores intercambiados por el metodo por valor: " << a << " " << b  <<std::endl;
}

void IntercambioPorPuntero(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
   std::cout << "Con los valores intercambiados por el metodo por puntero: " << *a << " " << *b  <<std::endl;
}

void IntercambioPorReferencia(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
   std::cout << "Con los valores intercambiados por el metodo por referencia: " << a << " " << b  <<std::endl;
}

int main ()
{

    int valor1, valor2;

    std::cout << "Ingrese el primer valor" << std::endl;
    std::cin >> valor1;
    std::cout << "Ingrese el segundo valor" << std::endl;
    std::cin >> valor2;

    IntercambioPorValor(valor1, valor2);
    std::cout << "Valores originales despues del metodo por valor: " << valor1 << " " << valor2  <<std::endl;

    IntercambioPorPuntero(&valor1, &valor2);
    std::cout << "Valores originales despues del metodo por puntero: " << valor1 << " " << valor2  <<std::endl;

    IntercambioPorReferencia(valor1, valor2);
    std::cout << "Valores originales despues del metodo por referencia: " << valor1 << " " << valor2  <<std::endl;

    return 0;
}