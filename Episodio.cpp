//Archivo .cpp de la clase "Episodio". Aqu� se programan todos los m�todos que se definieron en Episodio.h
// Created by Ximena Lizeth Trejo Lav�n on 11/12/22.
// Matr�cula: A01198557

#include "Episodio.h"

//Constructor default = Inicializar los atributos con 0
Episodio::Episodio(){
    titulo = "NA";
    temporada = 0;
    calificacion = 0;
}

//Constructor dentro de la clase. El atributo tipo string es titulo. Por otro lado, temporada y calificacion son int. Al definir dentro del m�todo cada atributo
//con un prefijo _, se est� haciendo una relaci�n entre el par�metro original dentro de la clase y el nuevo que est� definido en el m�todo.
Episodio::Episodio(string _titulo, int _temporada, int _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

//Se establece como string el par�metro dentro de void como _titulo, haciendo una relaci�n
//entre el par�metro original (titulo) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}

//Se establece como string el par�metro dentro de void como _temporada, haciendo una relaci�n
//entre el par�metro original (temporada) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}

//Se establece como string el par�metro dentro de void como _calificacion, haciendo una relaci�n
//entre el par�metro original (calificacion) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Episodio::setCalificacion(int _calificacion){
    calificacion = _calificacion;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
string Episodio::getTitulo(){
    return titulo;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
int Episodio::getTemporada(){
    return temporada;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
int Episodio::getCalificacion(){
    return calificacion;
}

//Se retorna en un m�todo string los atributos, convirtiendo a string aquellos que no son de este tipo.
string Episodio::str(){
    return titulo + ", " + to_string(temporada) + ", " + to_string(calificacion);
}
