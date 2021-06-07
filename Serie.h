#ifndef SERIE_INCLUDED
#define SERIE_H_INCLUDED
#include <iostream>
#include "Video.h"
#include "Capitulo.h"

using namespace std;

class Serie: public Video{
    private:
    string director;
    string estudio;
    int numeroDeTemporadas;
    int capitulos;

    public:
    Serie();
    Serie(string, int, string, int, int, string, string, int, int);
    string getDirector();
    string getEstudio();
    void setDirector(string);
    void setEstudio(string);
    int getnumeroDeTemporadas();
    void setnumeroDeTemporadas(int);
    int getCapitulos();
    void setCapitulos(int);
    void imprimir();


};
#endif