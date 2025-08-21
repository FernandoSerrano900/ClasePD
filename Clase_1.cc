#include <iostream>
#include <cstdlib>
#include <ctime>

std::string GenerarCupon(std::string prefijo);
std::string VerificarCupon(std::string cupon);
std::string SolicitarDatos();

int main()
{
    srand(time(0));

    int cant_cupones = 0;
    std::string gen_cupones[cant_cupones];

    std::cout << "Ingrese la cantidad de cupones a generar: ";
    std::cin >> cant_cupones;

    for (size_t i = 0; i < cant_cupones; i++)
    {
        gen_cupones[i] = GenerarCupon(SolicitarDatos());
    }

    std::string prefijo = SolicitarDatos();
    if (prefijo == "ERROR | Deben ser tres caracteres")
    {
        std::cout << prefijo << std::endl;
        return 1;
    }

    std::string cupon_generado = GenerarCupon(prefijo);
    std::cout << "El cupon generado es: " << cupon_generado << std::endl;

    std::string resultado = VerificarCupon(cupon_generado);
    std::cout << resultado << std::endl;

    return 0;
}

std::string GenerarCupon(std::string prefijo)
{
    int randomNum = rand() % 100 + 999; // Genera entre 999 y 1098
    std::string conversion = std::to_string(randomNum);
    return prefijo + conversion;
}

std::string VerificarCupon(std::string cupon)
{
    std::string num_extraido = cupon.substr(3, 4);
    int num_conversion = std::stoi(num_extraido);

    if (num_conversion % 2)
    {
        return "No tiene premio";
    }
    else
    {

        return "Tiene premio";
    }
}

std::string SolicitarDatos()
{
    std::string prefijo;
    std::cout << "Ingrese las letras del cupon: ";
    std::cin >> prefijo;

    do
    {
        
        if (prefijo.length() != 3)
        {
            return "ERROR | Deben ser tres caracteres";
        }
        else
        {
            return prefijo;
        }
    } while (true);
}