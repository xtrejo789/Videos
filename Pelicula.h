#ifndef PELICULA_H
#define PELICULA_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;


class Pelicula{
    public:
        //Métodos que conforman a la clase. Se explica cada uno en el archivo .cpp
        Pelicula();
        Pelicula(string _iD, string _titulo, int _duracion, string _genero, int _calificacion);

        void setId(string _iD);
        void setTitulo(string _titulo);
        void setDuracion(int _duracion);
        void setGenero(string _genero);
        void setCalificacion(int _calificacion);

        string getID();
        string getTitulo();
        int getDuracion();
        string getGenero();
        int getCalificacion();

        string str();

    private:
        string iD;
        string titulo;
        int duracion;
        string genero;
        int calificacion;
};

#endif // PELICULA_H
