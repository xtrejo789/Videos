#include "Videos.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <math.h>

using namespace std;

Videos::Videos(){
    cantidadSeries = 0;
    cantPeliculas = 0;
}

void Videos::setCantidadSeries(int _cantidadSeries){
    cantidadSeries = _cantidadSeries;
}

int Videos::getCantidadSeries(){
    return cantidadSeries;
}

void Videos::addSerie(Serie _serie){
    if (cantidadSeries < 100){
        arrSeries[cantidadSeries] = _serie;
    //Incrementar la cantidad de series en 1
        cantidadSeries++;
    }
    else{
        cout << "No se pudo agregar la serie" << endl;
    }
}

void Videos::calculaCalificacionPromedio(){
    for(int index = 0; index < cantidadSeries; index++){
        arrSeries[index].calculaCalificacionPromedio();
    }
}

void Videos::leerArchivo(){
    string linea, dato;
    int  index, columna;
    Episodio ep;
    Serie serie;
    Pelicula pelicula;
    std::ifstream lectura;
    lectura.open("Peliculas22.csv", ios::in);
    while (getline(lectura, linea)){ //Lee una película
        std::stringstream renglon{linea};

        columna = 0;
        while (getline(renglon, dato, ',')) // Separa los elementos
        {
            switch (columna++)
            {
                case 0: // iD
                    pelicula.setId(dato);
                    break;
                case 1: // Titulo
                    pelicula.setTitulo(dato);
                    break;
                case 2: // Duración
                    pelicula.setDuracion(stoi(dato));
                    break;
                case 3: // Género
                    pelicula.setGenero(dato);
                    break;
                case 4: // Calificación promedio
                    pelicula.setCalificacion(stoi(dato));
                    break;
            }
        }// fin while
        addPelicula(pelicula);

    }
    lectura.close();

    lectura.open("Series22.csv", ios::in);
    index = 0;
    while ( getline(lectura, linea)) // Lee una serie
    {
        std::stringstream renglon{linea};

        columna = 0;
        while (getline(renglon, dato, ',')) // Separa los elementos
        {
            switch (columna++)
            {
                case 0: // iD
                    serie.setId(dato);
                    break;
                case 1: // Título
                    serie.setTitulo(dato);
                    break;
                case 2: // Duración
                    serie.setDuracion(stoi(dato));
                    break;
                case 3: // Género
                    serie.setGenero(dato);
                    break;
                case 4: //Cant episodios - inicializar con 0 episodios todas las series
                    serie.setCantidadEpisodios(0);
                    break;
            }
        }// fin while

        addSerie(serie);
    }
    lectura.close();

    // LEER LOS EPISODIOS DE LAS SERIES
    index = 0;

    lectura.open("Episodios22.csv", ios::in);
    while ( getline(lectura, linea))
    {
        std::stringstream renglon(linea);
        columna = 0;
        while (getline(renglon, dato, ',')) // Separar los elementos
        {
            switch (columna++)
            {
                case 0:
                    index = stoi(dato) - 1;  // ¿A qué serie pertenece?
                    break;
                case 1: // Título
                    ep.setTitulo(dato);
                    break;
                case 2: // Temporada
                    ep.setTemporada(stoi(dato)); // string to int
                    break;
                case 3: // Calificación
                    ep.setCalificacion(stoi(dato)); // string to double
                    break;
            }
        } // Al salir de aqui ya se separó toda la línea

        //IMPLEMENTACIÓN DE SOBRECARGA DE OPERADORES
        //Utilizando la sobrecarga del operador +, se agrega el episodio al arreglo de Series
        arrSeries[index]= arrSeries[index] + ep;
    }

    lectura.close();
}

void Videos::reporteFrecuenciasYPromedioSeries(){
    cout << "Series:" << endl;
    for(int i = 0; i < cantidadSeries; i++){
        cout << "Indice " << i << ": " << arrSeries[i].str() << endl;
    }
    cout << "Películas:" << endl;
    for(int i = 0; i < cantPeliculas; i++){
        cout << "Indice " << i << ": " << arrPelicula[i].str() << endl;
    }
}

void Videos::addPelicula(Pelicula _pelicula){
    if (cantPeliculas < 100){
        arrPelicula[cantPeliculas] = _pelicula;
    //Incrementar la cantidad de series en 1
        cantPeliculas++;
    }
    else{
        cout << "No se pudo agregar la pelicula" << endl;
    }
}

void Videos::setCantidadPeliculas(int _cantPeliculas){
    cantPeliculas = _cantPeliculas;
}

int Videos::getCantidadPeliculas(){
    return cantPeliculas;
}


