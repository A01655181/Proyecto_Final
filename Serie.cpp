#include "Serie.h"

Serie::Serie(){
    director = "Nombre del director";
    estudio = "Nombre del estudio";
    numeroDeTemporadas = 1;
    capitulos = 1;
}

Serie::Serie(string nombre, int ID, string genero, int duracion, int calificacion, string director, string estudio, int numeroDeTemporadas, int capitulos):Video(nombre, ID, genero, duracion, calificacion){
    this ->director = director;
    this ->estudio = estudio;
    this ->numeroDeTemporadas = numeroDeTemporadas;
    this ->capitulos = capitulos;
}

string Serie::getDirector(){
    return director;
}

string Serie::getEstudio(){
    return estudio;
}

void Serie::setDirector(string dir){
    director = dir;
}

void Serie::setEstudio(string est){
    estudio = est;
}

int Serie::getnumeroDeTemporadas(){
    return numeroDeTemporadas;
}

int Serie::getCapitulos(){
    return capitulos;
}

void Serie::setCapitulos(int c){
    capitulos = c;
}

void Serie::setnumeroDeTemporadas(int t){
    numeroDeTemporadas = t;
}

void Serie::imprimir(){
    cout << "Titulo de la serie: " << getNombre() << endl;
    cout << "Director: " << getDirector() << endl;
    cout << "Estudio: " << getEstudio() << endl;
    cout << "Genero: " << getGenero() << endl;
    cout << "Temporadas: " << getnumeroDeTemporadas() << endl;
    cout << "Capitulos por temporada: " << getCapitulos() << endl;
    cout << "Calificacion: " << getCalificacion() << "/5" << endl; 
}

