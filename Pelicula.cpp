#include "Pelicula.h"

//Constructor default = Inicializar los atributos con 0. Atributos utilizados en la clase "Serie".
Pelicula::Pelicula(){
    iD = "NA";
    titulo = "NA";
    duracion = 0;
    genero = "NA";
    calificacion = 0;
}

//Constructor dentro de la clase. Los atributos tipo string son id, titulo y genero. Por otro lado, duracion, calificacion y cantEpisodios son int. Al definir dentro del m�todo cada atributo
//con un prefijo _, se est� haciendo una relaci�n entre el par�metro original dentro de la clase y el nuevo que est� definido en el m�todo.
Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, int _calificacion){
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacion = _calificacion;
}

//Se establece como string el par�metro dentro de void como _id, haciendo una relaci�n
//entre el par�metro original (id) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Pelicula::setId(string _iD){
    iD = _iD;
}

//Se establece como string el par�metro dentro de void como _titulo, haciendo una relaci�n
//entre el par�metro original (titulo) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Pelicula::setTitulo(string _titulo){
    titulo  = _titulo;
}

//Se establece como int el par�metro dentro de void como _duracion, haciendo una relaci�n
//entre el par�metro original (duracion) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Pelicula::setDuracion(int _duracion){
    duracion = _duracion;
}

//Se establece como string el par�metro dentro de void como _genero, haciendo una relaci�n
//entre el par�metro original (genero) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Pelicula::setGenero(string _genero){
    genero = _genero;
}

//Se establece como string el par�metro dentro de void como _calificacion, haciendo una relaci�n
//entre el par�metro original (calificacion) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Pelicula::setCalificacion(int _calificacion){
    calificacion = _calificacion;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
string Pelicula::getID(){
    return iD;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
string Pelicula::getTitulo(){
    return titulo;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
int Pelicula::getDuracion(){
    return duracion;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
string Pelicula::getGenero(){
    return genero;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
int Pelicula::getCalificacion(){
    return calificacion;
}

//Se retorna en un m�todo string los atributos, convirtiendo a string aquellos que no son de este tipo.
string Pelicula::str(){
    return iD + ", " + titulo + ", " + to_string(duracion) + ", " + genero + ", " + to_string(calificacion);
}
