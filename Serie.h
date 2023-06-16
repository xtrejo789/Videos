//Archivo .h de la clase "Serie". Se definen los métodos a utilizar, así como los tipos de datos a utilizar en la clase.
//
//  Created by Ximena Lizeth Trejo Lavín on 11/12/22.
//
// Matrícula: A01198557

#ifndef SERIE_H
#define SERIE_H
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

#include "Episodio.h"


//Declaración de la clase "Serie".
class Serie{
    //Métodos públicos dentro de la clase.
    public:

        //Métodos que conforman a la clase. Se explica cada uno en el archivo .cpp
        Serie();
        Serie(string _iD, string _titulo, int _duracion, string _genero, int _calificacion, int _cantEpisodios);

        void setId(string _iD);
        void setTitulo(string _titulo);
        void setDuracion(int _duracion);
        void setGenero(string _genero);
        void setCalificacion(int _calificacion);
        void setCantidadEpisodios(int _cantEpisodios);

        string getID();
        string getTitulo();
        int getDuracion();
        string getGenero();
        int getCalificacion();
        int getCantidadEpisodios();

        //Se retornará el índice del episodio. Se pone el & porque da la dirección de la variable. Está accediendo directamente al index del argumento.
        Episodio getEpisodio(int &index);
        // &index para cambiar el index dentro del arreglo.
        void setEpisodio(int &index, Episodio epi);
        //Se recorre el arreglo para calcular la calificación promedio.
        void calculaCalificacionPromedio();
        //Para incrementar la cantidad de episodios. Lo añade en la posición disponible.
        Serie& operator+(const Episodio& epi);
        //Borra el último episodio de la serie.
        void delEpisodio();

        string str();

    //Atributos privados de la clase. Se sabe que el id, el título y el género se conforman por palabras o letras, lo que los hace string.
    //Por otro lado, la duración, la calificación y la cantidad de episodios de la serie tendrán un valor numérico, por lo que son int.
    private:

        string iD;
        string titulo;
        int duracion;
        string genero;
        int calificacion;
        int cantEpisodios;
        //5 elementos en el arreglo
        Episodio episodios[11];
};

#endif // SERIE_H
