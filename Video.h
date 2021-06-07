#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED
#include <iostream>

using namespace std;

class Video{
    private:
    string nombre;
    int ID;
    string genero;
    int duracion;
    int calificacion;

    public:
    Video();
    Video(string, int, string, int, int);
    string getNombre();
    int getID();
    string getGenero();
    int getDuracion();
    int getCalificacion();
    void setNombre(string);
    void setID(int);
    void setGenero(string);
    void setDuracion(int);
    void setCalificacion(int);
    virtual void imprimir()=0;

};
#endif