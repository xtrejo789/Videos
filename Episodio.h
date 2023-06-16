//Archivo .cpp de la clase "Episodio". Aquí se programan todos los métodos que se definieron en Episodio.h
// Created by Ximena Lizeth Trejo Lavín on 11/12/22.
// Matrícula: A01198557

#ifndef EPISODIO_H
#define EPISODIO_H
#include <stdio.h>
#include <string>
using namespace std;

//Declaración de la clase "Episodio"
class Episodio{

    //Métodos públicos dentro de la clase.
    public:

        //Métodos que conforman a la clase. Se explica cada uno en el archivo .cpp
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
    //Atributos privados de la clase. Se sabe que el título se conforma por palabras o letras, lo que lo hace string.
    //Por otro lado, la temporada y la calificación tendrán un valor numérico, por lo que son int.
    private:
        string titulo;
        int temporada;
        int calificacion;
};

#endif // EPISODIO_H
