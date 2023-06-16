//Archivo .cpp de la clase "Episodio". Aquí se programan todos los métodos que se definieron en Episodio.h
// Created by Ximena Lizeth Trejo Lavín on 11/12/22.
// Matrícula: A01198557

#include "Episodio.h"

//Constructor default = Inicializar los atributos con 0
Episodio::Episodio(){
    titulo = "NA";
    temporada = 0;
    calificacion = 0;
}

//Constructor dentro de la clase. El atributo tipo string es titulo. Por otro lado, temporada y calificacion son int. Al definir dentro del método cada atributo
//con un prefijo _, se está haciendo una relación entre el parámetro original dentro de la clase y el nuevo que está definido en el método.
Episodio::Episodio(string _titulo, int _temporada, int _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

//Se establece como string el parámetro dentro de void como _titulo, haciendo una relación
//entre el parámetro original (titulo) y el nuevo que se está definiendo. Se utiliza set debido a que el usuario establecerá el valor para el atributo.
void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}

//Se establece como string el parámetro dentro de void como _temporada, haciendo una relación
//entre el parámetro original (temporada) y el nuevo que se está definiendo. Se utiliza set debido a que el usuario establecerá el valor para el atributo.
void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}

//Se establece como string el parámetro dentro de void como _calificacion, haciendo una relación
//entre el parámetro original (calificacion) y el nuevo que se está definiendo. Se utiliza set debido a que el usuario establecerá el valor para el atributo.
void Episodio::setCalificacion(int _calificacion){
    calificacion = _calificacion;
}

//Método donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Además, se retorna el atributo de la clase, siendo necesario utilizar get.
string Episodio::getTitulo(){
    return titulo;
}

//Método donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Además, se retorna el atributo de la clase, siendo necesario utilizar get.
int Episodio::getTemporada(){
    return temporada;
}

//Método donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Además, se retorna el atributo de la clase, siendo necesario utilizar get.
int Episodio::getCalificacion(){
    return calificacion;
}

//Se retorna en un método string los atributos, convirtiendo a string aquellos que no son de este tipo.
string Episodio::str(){
    return titulo + ", " + to_string(temporada) + ", " + to_string(calificacion);
}
