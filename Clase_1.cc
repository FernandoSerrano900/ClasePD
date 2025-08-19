#include <iostream>
#include <cstdlib>
#include <ctime>

std::string GenerateCupon(std::string UserCupon)
{

    srand(time(0));
    int RandomNumber;
    RandomNumber = rand() % 100 + 999;
    
    std::cout << "Su cupon es: " << UserCupon << RandomNumber << std::endl;

    return 0;


}


void VerificarCupon (std::string cupon){
    //Extraer la parte numerica del cupon
    std::string num_extraido = cupon.substr(3, 4);

    //Convertir de entero a string
    int num_conversion = std::stoi(num_extraido);

    //Validar si es par o no es par
     if (num_conversion % 2)
    {
        std::cout << "Es numero par";
    } else
    {
        std::cout << "No es par";
    }
    
}

int main ()
{
  
    std::string UserCupon;

    do
    {
        std::cout << "Porfavor escribe el mes del cupon (Solo las primeras 3 letras de cada mes)." << std::endl;
        std::cin >> UserCupon;
    } while (UserCupon.length() == 0 || UserCupon.length() > 3);
    

    GenerateCupon(UserCupon);

    VerificarCupon(UserCupon);
    
    
    return 0;
}

