//Nombre: Ximena Lizeth Trejo Lavín
//Matrícula: A01198557
#include "Series.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

//Constructor default que inicializa en 0
Series::Series(){
    cantidadSeries = 0;
    cantPeliculas = 0;
}

//Constructor propio de la clase, inicializa el atributo privado en el parámetro de entrada.
void Series::setCantidadSeries(int _cantidadSeries){
    cantidadSeries = _cantidadSeries;
}

//Obtener cantidad de series.
int Series::getCantidadSeries(){
    return cantidadSeries;
}

//Si la cantidad de series es menor a la cantidad de series dentro del arreglo de arrSeries, se declara igual
//al parámetro de entrada, y se incrementa en 1. Sino, se retorna un mensaje.
void Series::addPelicula(Pelicula _pelicula){
    if (cantPeliculas < 100){
        arrPelicula[cantPeliculas] = _pelicula;
    //Incrementar la cantidad de series en 1
        cantPeliculas++;
    }
    else{
        cout << "No se pudo agregar la pelicula" << endl;
    }
}

//Constructor propio de la clase, inicializa el atributo privado en el parámetro de entrada.
void Series::setCantidadPeliculas(int _cantPeliculas){
    cantPeliculas = _cantPeliculas;
}

//Obtener cantidad de series.
int Series::getCantidadPeliculas(){
    return cantPeliculas;
}



//Si la cantidad de series es menor a la cantidad de series dentro del arreglo de arrSeries, se declara igual
//al parámetro de entrada, y se incrementa en 1. Sino, se retorna un mensaje.
void Series::addSerie(Serie _serie){
    if (cantidadSeries < 100){
        arrSeries[cantidadSeries] = _serie;
    //Incrementar la cantidad de series en 1
        cantidadSeries++;
    }
    else{
        cout << "No se pudo agregar la serie" << endl;
    }
}

//Recorre el arreglo de series, llamando a la función calculaCalificacionPromedio,
//actualizando la información de la serie.
//POLIMORFISMO
void Series::calculaCalificacionPromedio(){
    for(int index = 0; index < cantidadSeries; index++){
        arrSeries[index].calculaCalificacionPromedio();
    }
}

//Leer archivos con los que se trabajarán.
void Series::leerArchivo(){
    string linea, dato;
    int  index, columna, indexP;
    Episodio ep;
    Serie serie;
    Pelicula pelicula;
    std::ifstream lectura;
    // IMPORTANTE - COPIA EL PATH DE TU ARCHIVO CUANDO LO SUBAS A GITHUB SOLO DEJA EL NOMBRE
    lectura.open("Peliculas22.csv", ios::in);
    indexP = 0;
    while (getline(lectura, linea)){ //lee una serie
       // cout << linea << endl; //borrar
        std::stringstream renglon{linea};

        columna = 0;
        while (getline(renglon, dato, ',')) // separa los elementos,
        {
            switch (columna++)
            {
                case 0: // iD
                    pelicula.setId(dato);
                    break;
                case 1: // Titulo
                    pelicula.setTitulo(dato);
                    break;
                case 2: // duracion
                    pelicula.setDuracion(stoi(dato));
                    break;
                case 3: // genero
                    pelicula.setGenero(dato);
                    break;
                case 4: // calificación promedio
                    pelicula.setCalificacion(stoi(dato));
                    break;
            }
        }// fin while

        //Para verificar
        //cout << pelicula.str() << endl;
        addPelicula(pelicula);

    }
    lectura.close();

    // IMPORTANTE - COPIA EL PATH DE TU ARCHIVO CUANDO LO SUBAS A GITHUB SOLO DEJA EL NOMBRE
    lectura.open("Series22.csv", ios::in);
    index = 0;
    while ( getline(lectura, linea)) // lee una serie
    {
       // cout << linea << endl; //borrar
        std::stringstream renglon{linea};

        columna = 0;
        while (getline(renglon, dato, ',')) // separa los elementos,
        {
            switch (columna++)
            {
                case 0: // iD
                    serie.setId(dato);
                    break;
                case 1: // Titulo
                    serie.setTitulo(dato);
                    break;
                case 2: // duracion
                    serie.setDuracion(stoi(dato));
                    break;
                case 3: // genero
                    serie.setGenero(dato);
                    break;
                case 4: //cant episodios - inicializar con 0 episodios todas las series
                    serie.setCantidadEpisodios(0);
                    break;
            }
        }// fin while

        // para verificar si se guardo correctamente
       //cout << serie.str( ) << endl;


        addSerie(serie);


        //cout << "*********  se añadio una serie - Cantidad de series ="  <<  cantidadSeries << endl;

    }
    lectura.close();

    // LEER LOS EPISODIOS DE LAS SERIES
    index = 0;

    // IMPORTANTE - COPIA EL PATH DE TU ARCHIVO CUANDO LO SUBAS A GITHUB SOLO DEJA EL NOMBRE
    lectura.open("Episodios22.csv", ios::in);
    while ( getline(lectura, linea))
    {
      //  cout << linea << endl; // se borra
        std::stringstream renglon(linea);
        columna = 0;
        while (getline(renglon, dato, ',')) // separar los elementos,
        {
            switch (columna++)
            {
                case 0:
                    index = stoi(dato) - 1;  // a qué serie pertenece?
                    break;
                case 1: // Titulo
                    ep.setTitulo(dato);
                    break;
                case 2: // temporada
                    ep.setTemporada(stoi(dato)); // string to int
                    break;
                case 3: // calificacion
                    ep.setCalificacion(stoi(dato)); // string to double
                    break;
            }
        } // al salir de aqui ya se separo toda la línea

        arrSeries[index].addEpisodio(ep);
    }

    lectura.close();
}

//Función donde se verifica que existe el género en el arreglo de géneros, donde
//se va incrementando la cantidad de los mismos. Si existe un género, se retorna
//el índice donde está. Si no está, lo da de alta en la siguiente posición, y
//se retorna la nueva posición.
int existe_genero(string arrGeneros[], int &cantidad, string genero){
    for (int index = 0; index < cantidad; index++)
        if (arrGeneros[index] == genero)
            return index;
    arrGeneros[cantidad] = genero;
    return cantidad++;
}

//Método que recorre arrSeries, despliega el str() de Serie.
void Series::reporteFrecuenciasYPromedioSeries(){
    cout << "Reporte" << endl;
    for(int i = 0; i < cantidadSeries; i++){
        cout << "Indice " << i << ": " << arrSeries[i].str() << endl;
    }
    for(int i = 0; i < cantPeliculas; i++){
        cout << "Indice " << i << ": " << arrPelicula[i].str() << endl;
    }
}
