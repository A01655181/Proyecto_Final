#ifndef PELICULA_INCLUDED
#define PELICULA_H_INCLUDED
#include <iostream>
#include "Video.h"

using namespace std;

class Pelicula: public Video{
    private:
    string director;
    string estudio;

    public:
    Pelicula();
    Pelicula(string, int, string, int, int, string, string);
    string getDirector();
    string getEstudio();
    void setDirector(string);
    void setEstudio(string);
    void imprimir();


};
#endif