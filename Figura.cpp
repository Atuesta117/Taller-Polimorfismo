/**
* @file Figura.cpp
* @brief Implementación de la clase Figura, la cual es la clase padre.
*
* @details
* Este archivo contiene la implementación de la clase Figura.
* La clase Figura es una clase abstracta que define la interfaz para las figuras geométricas.
* La clase puede calcular el área y el perímetro de la figura, así como agrandar la figura por un factor dado.
* @course Fundamentos de Programación Orientada a Objetos (FPOO)
* @institution Universidad del Valle
*
* @authors
* - Juan Jose Atuesta - atuesta.juan@correounivalle.edu.co
* - Sergio Garcia Ramos - sergio.garcia.ramos@correounivalle.edu.co
* - Paula Mariana Murillo - murillo.paula@correounivalle.edu.co
*
* @date Mayo 2025
*/

#include "Figura.h"
using namespace std;
Figura::Figura(double _x, double _y, double _base, double _altura){
    this->base = _base;
    this->altura = _altura;
    this->x = _x;
    this->y = _y;
}

double Figura::area() {
    return 0; // Método virtual puro
}
double Figura::perimetro() {
    return 0; // Método virtual puro
}

void Figura::agrandar(double factor){
    this->base *= factor;
    this->altura *= factor;
}   