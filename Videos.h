#ifndef VIDEOS_H
#define VIDEOS_H
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>


using namespace std;

#include "Serie.h"
#include "Pelicula.h"


class Videos{
    public:
        Videos();
        void setCantidadSeries(int _cantidadSeries);
        int getCantidadSeries();
        void addSerie(Serie _serie);
        void calculaCalificacionPromedio();
        void leerArchivo();
        void reporteFrecuenciasYPromedioSeries();
        void addPelicula(Pelicula _pelicula);
        void setCantidadPeliculas(int _cantPeliculas);
        int getCantidadPeliculas();
    private:
        Serie arrSeries[100];
        int cantidadSeries;
        Pelicula arrPelicula[100];
        int cantPeliculas;
};

#endif // VIDEOS_H
