#include "Pelicula.h"

//Constructor default = Inicializar los atributos con 0. Atributos utilizados en la clase "Serie".
Pelicula::Pelicula(){
    iD = "NA";
    titulo = "NA";
    duracion = 0;
    genero = "NA";
    calificacion = 0;
}

//Constructor dentro de la clase. Los atributos tipo string son id, titulo y genero. Por otro lado, duracion, calificacion y cantEpisodios son int. Al definir dentro del método cada atributo
//con un prefijo _, se está haciendo una relación entre el parámetro original dentro de la clase y el nuevo que está definido en el método.
Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, int _calificacion){
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacion = _calificacion;
}

//Se establece como string el parámetro dentro de void como _id, haciendo una relación
//entre el parámetro original (id) y el nuevo que se está definiendo. Se utiliza set debido a que el usuario establecerá el valor para el atributo.
void Pelicula::setId(string _iD){
    iD = _iD;
}

//Se establece como string el parámetro dentro de void como _titulo, haciendo una relación
//entre el parámetro original (titulo) y el nuevo que se está definiendo. Se utiliza set debido a que el usuario establecerá el valor para el atributo.
void Pelicula::setTitulo(string _titulo){
    titulo  = _titulo;
}

//Se establece como int el parámetro dentro de void como _duracion, haciendo una relación
//entre el parámetro original (duracion) y el nuevo que se está definiendo. Se utiliza set debido a que el usuario establecerá el valor para el atributo.
void Pelicula::setDuracion(int _duracion){
    duracion = _duracion;
}

//Se establece como string el parámetro dentro de void como _genero, haciendo una relación
//entre el parámetro original (genero) y el nuevo que se está definiendo. Se utiliza set debido a que el usuario establecerá el valor para el atributo.
void Pelicula::setGenero(string _genero){
    genero = _genero;
}

//Se establece como string el parámetro dentro de void como _calificacion, haciendo una relación
//entre el parámetro original (calificacion) y el nuevo que se está definiendo. Se utiliza set debido a que el usuario establecerá el valor para el atributo.
void Pelicula::setCalificacion(int _calificacion){
    calificacion = _calificacion;
}

//Método donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Además, se retorna el atributo de la clase, siendo necesario utilizar get.
string Pelicula::getID(){
    return iD;
}

//Método donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Además, se retorna el atributo de la clase, siendo necesario utilizar get.
string Pelicula::getTitulo(){
    return titulo;
}

//Método donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Además, se retorna el atributo de la clase, siendo necesario utilizar get.
int Pelicula::getDuracion(){
    return duracion;
}

//Método donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Además, se retorna el atributo de la clase, siendo necesario utilizar get.
string Pelicula::getGenero(){
    return genero;
}

//Método donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Además, se retorna el atributo de la clase, siendo necesario utilizar get.
int Pelicula::getCalificacion(){
    return calificacion;
}

//Se retorna en un método string los atributos, convirtiendo a string aquellos que no son de este tipo.
string Pelicula::str(){
    return iD + ", " + titulo + ", " + to_string(duracion) + ", " + genero + ", " + to_string(calificacion);
}
