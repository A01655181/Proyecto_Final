#include "Video.h"
using namespace std;

Video::Video(){
    nombre = "Nombre del video";
    ID = 0;
    genero = "Sin genero";
    duracion = 0;
    calificacion = 1;
}

Video::Video(string nombre, int ID, string genero, int duracion, int calificacion){
    this -> nombre = nombre;
    this -> ID = ID;
    this -> genero = genero;
    this -> duracion = duracion;
    this -> calificacion = calificacion;
}

string Video::getNombre(){
    return nombre;
}

int Video::getID(){
    return ID;
}

string Video::getGenero(){
    return genero;
}

int Video::getDuracion(){
    return duracion;
}

int Video::getCalificacion(){
    return calificacion;
}

void Video::setNombre(string nom){
    nombre = nom;
}

void Video::setID(int id){
    ID = id;
}

void Video::setGenero(string gen){
    genero = gen;
}

void Video::setDuracion(int time){
    duracion = time;
}

void Video::setCalificacion(int calif){
    calificacion = calif;
}