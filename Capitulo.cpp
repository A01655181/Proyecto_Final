#include "Capitulo.h"

Capitulo::Capitulo(){
    numeroDeTemporada = 1;
    numeroDeCaptulo = 1;

}

Capitulo::Capitulo(string nombre, int ID, string genero, int duracion, int calificacion, int numeroDeTemporada, int numeroDeCaptulo):Video(nombre, ID, genero, duracion, calificacion){
    this ->numeroDeCaptulo = numeroDeCaptulo;
    this ->numeroDeTemporada = numeroDeTemporada;
}

int Capitulo::getNumeroDeCapitulo(){
    return numeroDeCaptulo;
}

int Capitulo::getNumeroDeTemporada(){
    return numeroDeTemporada;
}

void Capitulo::setNumeroDeCapitulo(int num){
    numeroDeCaptulo = num;
}

void Capitulo::setumeroDeTemporada(int num){
    numeroDeTemporada = num;
}

void Capitulo::imprimir(){
    cout << "Nombre del capitulo: " << getNombre() << endl;
    cout << "Temporada: " << getNumeroDeTemporada() << endl;
    cout << "Capitulo: " << getNumeroDeCapitulo() << endl;
    cout << "Duracion: " << getDuracion() << " min" << endl;
    cout << "Calificacion: " << getCalificacion() << "/5" << endl; 
}