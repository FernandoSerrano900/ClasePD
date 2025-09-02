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

void SolicitarDatosAlbum(Album &album){

    std::cout << "Ingrese el nombre del album: ";
    std::cin >> album.nombre_album;
    std::cout << "Ingrese el anio de lanzamiento del album: ";
    std::cin >> album.ano_lanzamiento;
    int cantidad_canciones;
    std::cout << "Ingrese la cantidad de canciones del album: ";
    std::cin >> cantidad_canciones;
    for (int i = 0; i < cantidad_canciones; i++) {
        std::string nombre_cancion;
        std::cout << "Ingrese el nombre de la cancion " << (i + 1) << ": ";
        std::cin >> nombre_cancion;
        album.canciones.push_back(std::make_pair(i + 1, nombre_cancion));
    }
}



int main ()
{
    Artista artista;
    SolicitarDatosArtista(artista);

   Album album;
    SolicitarDatosAlbum(album);

    

    return 0;
}