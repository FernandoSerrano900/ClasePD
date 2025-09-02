//Un sistema que permita gestionar informacion de relacionada con albumenes musicales
//Para cada album se debe utilizar una estructura que contenga:
//Nombre del album
//Ano de lanzamiento

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <ctime>

struct Album
{
    std::string nombre_album;
    int ano_lanzamiento;
    std::vector<std::pair<int, std::string>> canciones;

};

struct Artista
{
    std::string nombre_artista;
    std::string nacionalidad;

};

void SolicitarDatosArtista(Artista &artista){

    std::cout << "Ingrese el nombre del artista: ";
    std::cin >> artista.nombre_artista;
    std::cout << "Ingrese la nacionalidad del artista: ";
    std::cin >> artista.nacionalidad;
}




int main ()
{
    Artista artista;
    SolicitarDatosArtista(artista);

   

    return 0;
}