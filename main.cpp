#include <iostream>
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Capitulo.h"

using namespace std;

int main() {

    Pelicula p1("Bastardos sin gloria", 1, "accion", 120, 4, "Tarantino", "Universal pictures");
    Serie s1("Avatar", 2, "aventura", 2, 5, "Michael Dante DiMartino", "Nickeleon", 3, 20);
//    Capitulo c1("Angg despierta", 2, "aventura", 30, 3, 1, 1);
//    Capitulo c2("Revelacion", 2, "aventura", 30, 5, 1, 2);
    p1.imprimir();
    cout << " " << endl;
    s1.imprimir();
    cout << " " << endl;
 //   c1.imprimir();
    cout << " " << endl;
/*
    Capitulo temporada[s1.getnumeroDeTemporadas()][s1.getCapitulos()];
    temporada[c1.getNumeroDeTemporada()][c1.getNumeroDeCapitulo()]=c1;
    temporada[c2.getNumeroDeTemporada()][c2.getNumeroDeCapitulo()]=c2;
    temporada[c1.getNumeroDeTemporada()][c1.getNumeroDeCapitulo()].imprimir();
    cout << " " << endl;
    temporada[c2.getNumeroDeTemporada()][c2.getNumeroDeCapitulo()].imprimir();
*/
    Capitulo *temporada[s1.getnumeroDeTemporadas()][s1.getCapitulos()];
    temporada[0][0] = new Capitulo("Angg despierta", 2, "aventura", 30, 3, 1, 1);
    temporada[0][1] = new Capitulo("Revelacion", 2, "aventura", 30, 5, 1, 2);
    temporada[0][0]->imprimir();
    cout << " " << endl;
    temporada[0][1]->imprimir();



}