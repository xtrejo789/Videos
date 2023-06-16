//
//  main.cpp
//
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Videos.h"
#include "Episodio.h"
#include "Series.h"

using namespace std;

void leerSerie(){
    Videos prueba;
    prueba.leerArchivo();
}

void leerEpisodio(std::string &_titulo, int &_temporada, int &_calificacion){
    //cout << "Ingresa titulo del Episodio:";
    cin.ignore();
    getline(cin, _titulo);
   //cout << "Ingresa temporada:";
    cin >> _temporada;
   // cout << "Ingresa calificación:";
    cin >> _calificacion;
}

int menu( ){ //: Función que despliega el siguiente menú de opciones y lee y retorna el valor leído
    int opcion;
    cin >> opcion;
    return opcion;
}

int main() {
    // 1º Declaración de objetos de las clase creadas, llamar a los constructores con parámetros
    // Titulo temporada calificacion
    Episodio episodio1; // calificacion, episodios
    Serie serie1_22;
    Videos negocio;

    // 2º Declaración de variables
    int index, opcion, temporada, duracion, calificacion, cantEpisodios;
    string id,titulo,genero;

    //* 3º Inicializar la vccc antes del ciclo
    opcion = menu();

    //* 4º Incluir la vccc dentro de la condicion del ciclo
    while (opcion != 0){

        //* 5º Determinar que hacer en cada opcion
        switch (opcion) {
            case 1:
                leerSerie();
                serie1_22 = Serie(id, titulo, duracion, genero, calificacion, cantEpisodios);
                break;
            case 2:
                //  cout << "Ingresa el nuevo id:";
                cin >> id;
                serie1_22.setId(id);
                break;
            case 3:
                //  cout << "Ingresa titulo:";
                cin.ignore();
                getline(cin, titulo);
                serie1_22.setTitulo(titulo);
                break;
            case 4:
                //  cout << "Ingresa duracion en minutos:";
                cin >> duracion;
                serie1_22.setDuracion(duracion);
                break;
            case 5:
                //   cout << "Ingresa genero:";
                cin >> genero;
                serie1_22.setGenero(genero);
                break;
            case 6:
                //  cout << "Ingresa calificación:";
                cin >> calificacion;
                //serie1_22.setCalificacion(calificacion);
                break;
            case 7:
                //   cout << "Ingresa cantidad de episodios:";
                cin >> cantEpisodios;
                serie1_22.setCantidadEpisodios(cantEpisodios);
                break;
            case 8:
                // Desplegar la información de la serie
                cout << serie1_22.str() << endl;
                break;
            case 10:
                leerEpisodio(titulo, temporada, calificacion);
                episodio1 = Episodio(titulo, temporada, calificacion);
                break;
            case 11: // Desplegar el objeto de la clase Episodio
                cout << episodio1.str() << endl;
                break;
            case 12: // setTitulo
                cin.ignore();
                getline(cin, titulo);
                episodio1.setTitulo(titulo);
                break;
            case 13: // setTemporada
                cin >> temporada;
                episodio1.setTemporada(temporada);
                break;
            case 14: // setCalificacion
                cin >> calificacion;
                episodio1.setCalificacion(calificacion);
                break;
            case 15: // getTitulo
                cout << episodio1.getTitulo() << endl;
                break;
            case 16: // getTemporada
                cout << episodio1.getTemporada() << endl;
                break;
            case 17: // getCalificacion
                cout << episodio1.getCalificacion() << endl;
                break;
            case 18: //
                serie1_22.delEpisodio();
                break;
            case 19: //
                // se pide el episodio 1
                cin >> index;
                episodio1 = serie1_22.getEpisodio(index);
                if (index == -1){
                    cout << "No existe el episodio\n";
                }
                else{
                    cout << episodio1.str() << endl;
                }
                break;
            case 20: //
                serie1_22.calculaCalificacionPromedio();
                break;
            case 21: //
                negocio.leerArchivo();
                break;
            case 22: //
                negocio.calculaCalificacionPromedio();
                break;
            case 23: //
                cout << negocio.getCantidadSeries() << endl;
                negocio.addSerie(serie1_22);
                cout << negocio.getCantidadSeries() << endl;
                break;
            case 24: //
                negocio.leerArchivo();
                negocio.calculaCalificacionPromedio();
                negocio.reporteFrecuenciasYPromedioSeries();
                break;
            default:
                break;
        }
        //* 6º Actualizar la vccc dentro del ciclo
        opcion = menu();

    }
    return 0;
}
