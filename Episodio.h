//Archivo .cpp de la clase "Episodio". Aqu� se programan todos los m�todos que se definieron en Episodio.h
// Created by Ximena Lizeth Trejo Lav�n on 11/12/22.
// Matr�cula: A01198557

#ifndef EPISODIO_H
#define EPISODIO_H
#include <stdio.h>
#include <string>
using namespace std;

//Declaraci�n de la clase "Episodio"
class Episodio{

    //M�todos p�blicos dentro de la clase.
    public:

        //M�todos que conforman a la clase. Se explica cada uno en el archivo .cpp
        Episodio();
        Episodio(string _titulo, int _temporada, int _calificacion);
        void setTitulo(string _titulo);
        void setTemporada(int _temporada);
        void setCalificacion(int _calificacion);
        string getTitulo();
        int getTemporada();
        int getCalificacion();
        void calculaCalificacionPromedio();
        string str();
    //Atributos privados de la clase. Se sabe que el t�tulo se conforma por palabras o letras, lo que lo hace string.
    //Por otro lado, la temporada y la calificaci�n tendr�n un valor num�rico, por lo que son int.
    private:
        string titulo;
        int temporada;
        int calificacion;
};

#endif // EPISODIO_H
