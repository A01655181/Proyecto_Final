#ifndef CAPITULO_INCLUDED
#define CAPITULO_INCLUDED
#include <iostream>
#include "Video.h"

using namespace std;

class Capitulo: public Video{
    private:
    int numeroDeTemporada;
    int numeroDeCaptulo;

    public:
    Capitulo();
    Capitulo(string, int, string, int, int, int, int);
    int getNumeroDeCapitulo();
    void setNumeroDeCapitulo(int);
    int getNumeroDeTemporada();
    void setumeroDeTemporada(int);
    void imprimir();


};
#endif