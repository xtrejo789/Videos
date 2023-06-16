//Archivo .cpp de la clase "Serie". Aqu� se programan todos los m�todos definidos en Serie.h
// Created by Ximena Lizeth Trejo Lav�n on 11/12/22.
// Matr�cula: A01198557

#include "Serie.h"

//Constructor default = Inicializar los atributos con 0. Atributos utilizados en la clase "Serie".
Serie::Serie(){
    iD = "NA";
    titulo = "NA";
    duracion = 0;
    genero = "NA";
    calificacion = 0;
    cantEpisodios = 0;
}

//Constructor dentro de la clase. Los atributos tipo string son id, titulo y genero. Por otro lado, duracion, calificacion y cantEpisodios son int. Al definir dentro del m�todo cada atributo
//con un prefijo _, se est� haciendo una relaci�n entre el par�metro original dentro de la clase y el nuevo que est� definido en el m�todo.
Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, int _calificacion, int _cantEpisodios){
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacion = _calificacion;
    cantEpisodios = _cantEpisodios;
}

//Se retornar� el �ndice del episodio. Se pone el & porque da la direcci�n de la variable. Est� accediendo directamente al index del argumento.
Episodio Serie::getEpisodio(int &index){
    //Validar que el episodio index exista. Si no existe, index = -1, y retorno un epi.
    //Si s� existe el episodio index, retornar episodios[index].
    Episodio epi;
    //Si el �ndice es mayor o igual a 0 y menor a cantEpisodios
    if (index >= 0 && index < cantEpisodios){
        //Retornar el episodio [index] COMPOSICI�N
        return episodios[index];
    }
    else{
        index = -1;
        return epi;
    }
}

// &index para cambiar el index dentro del arreglo.
void Serie::setEpisodio(int &index, Episodio epi){
    //S�lo se cambia el episodio si el episodio est� dado de alta en el arreglo.
    if (index >= 0 && index < cantEpisodios){ //Validar que el episodio existe
        //Si s� existe, se cambia por el nuevo valor
        episodios[index] = epi; //Se cambia al nuevo episodio, que es epi
    }
    else{
        index = -1;
    }
}

//Se recorre el arreglo para calcular la calificaci�n promedio.
void Serie::calculaCalificacionPromedio(){
    Serie serie;
    int acumulador = 0;
    for(int index = 0; index < cantEpisodios; index++){
        acumulador += episodios[index].getCalificacion();
    }
    //Validar
    if (cantEpisodios > 0){
        calificacion = acumulador / cantEpisodios;
        serie.setCalificacion(calificacion);
    }
    else{
        calificacion = 0;
        serie.setCalificacion(calificacion);
    }
}

Serie& Serie::operator+(const Episodio& epi){
    //Validar que haya espacio para a�adir el episodio
    if (cantEpisodios < 11){
        episodios[cantEpisodios] = epi;
        //Incrementar la cantidad de episodios en 1
        cantEpisodios++;
    }
}

//Borra el �ltimo episodio de la serie. Verificar que exista un episodio.
void Serie::delEpisodio(){
    if (cantEpisodios > 0){
        cantEpisodios--;
    }
}

//Se establece como string el par�metro dentro de void como _id, haciendo una relaci�n
//entre el par�metro original (id) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Serie::setId(string _iD){
    iD = _iD;
}

//Se establece como string el par�metro dentro de void como _titulo, haciendo una relaci�n
//entre el par�metro original (titulo) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Serie::setTitulo(string _titulo){
    titulo  = _titulo;
}

//Se establece como int el par�metro dentro de void como _duracion, haciendo una relaci�n
//entre el par�metro original (duracion) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Serie::setDuracion(int _duracion){
    duracion = _duracion;
}

//Se establece como string el par�metro dentro de void como _genero, haciendo una relaci�n
//entre el par�metro original (genero) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Serie::setGenero(string _genero){
    genero = _genero;
}

//Se establece como string el par�metro dentro de void como _calificacion, haciendo una relaci�n
//entre el par�metro original (calificacion) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Serie::setCalificacion(int _calificacion){
    calificacion = _calificacion;
}

//Se establece como string el par�metro dentro de void como _cantEpisodios, haciendo una relaci�n
//entre el par�metro original (cantEpisodios) y el nuevo que se est� definiendo. Se utiliza set debido a que el usuario establecer� el valor para el atributo.
void Serie::setCantidadEpisodios(int _cantEpisodios){
    cantEpisodios = _cantEpisodios;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
string Serie::getID(){
    return iD;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
string Serie::getTitulo(){
    return titulo;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
int Serie::getDuracion(){
    return duracion;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
string Serie::getGenero(){
    return genero;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
int Serie::getCalificacion(){
    return calificacion;
}

//M�todo donde, dependiendo del tipo de dato que tiene el atributo de la clase, se define al principio dicho dato.
//Adem�s, se retorna el atributo de la clase, siendo necesario utilizar get.
int Serie::getCantidadEpisodios(){
    return cantEpisodios;
}

//Se retorna en un m�todo string los atributos, convirtiendo a string aquellos que no son de este tipo.
string Serie::str(){
    //Acumular todos los episodios en un string
    string acum = "\n";
    for(int index = 0; index < cantEpisodios; index++){
            //Se manda llamar al str de la clase Episodio, dado que "episodios" es de la clase Episodio.
        acum += 'E' + to_string(index) + ", " + episodios[index].str() + '\n';
    }
    Serie strSerie;
    return iD + ", " + titulo + ", " + to_string(duracion) + ", " + genero + ", " + to_string(calificacion) + acum;
}
