/**
* @file Rectangulo.cpp
* @brief Implementación de la clase Rectangulo, que hereda de Figura.
*
* @details
* Este archivo contiene la implementación de la clase Rectangulo.
* Esta clase calcula el area y el perímetro de un rectángulo dado su base y altura.
* La clase Rectangulo hereda de la clase Figura, que es una clase abstracta.
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

#include "Rectangulo.h"
using namespace std;
Rectangulo::Rectangulo(double _x, double _y, double _base, double _altura) : Figura(_x, _y, _base, _altura) {
    this->base = _base;
    this->altura = _altura;
    this->x = _x;
    this->y = _y;
}

double Rectangulo::area() {
    return base * altura;
}
double Rectangulo::perimetro() {
    return 2 * (base + altura);
}
