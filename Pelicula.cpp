#include "Pelicula.h"

Pelicula::Pelicula(){
    director = "Nombre del director";
    estudio = "Nombre del estudio";

}

Pelicula::Pelicula(string nombre, int ID, string genero, int duracion, int calificacion, string director, string estudio):Video(nombre, ID, genero, duracion, calificacion){
    this ->director = director;
    this ->estudio = estudio;
}

string Pelicula::getDirector(){
    return director;
}

string Pelicula::getEstudio(){
    return estudio;
}

void Pelicula::setDirector(string dir){
    director = dir;
}

void Pelicula::setEstudio(string est){
    estudio = est;
}

void Pelicula::imprimir(){
    cout << "Titulo de la pelicula: " << getNombre() << endl;
    cout << "Director: " << getDirector() << endl;
    cout << "Estudio: " << getEstudio() << endl;
    cout << "Genero: " << getGenero() << endl;
    cout << "Duracion: " << getDuracion() << " min" << endl;
    cout << "Calificacion: " << getCalificacion() << "/5" << endl; 
}