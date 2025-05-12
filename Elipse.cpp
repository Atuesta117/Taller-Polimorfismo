/**
* @file ELipse.cpp
* @brief Implementación de la clase Elipse, que hereda de Figura.
*
* @details
* Este archivo contiene la implementación de la clase Elipse. Una elipse es una figura geométrica
* La idea es que dado una base y altura junto con unas coordenadas, pueda calcular el area y el perímetro.
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

#include "Elipse.h"
#include <cmath>
using namespace std;
Elipse::Elipse(double _x, double _y, double _base, double _altura) : Figura(_x, _y, _base, _altura) {
    this->base = _base;
    this->altura = _altura;
    this->x = _x;
    this->y = _y;
}

double Elipse::area() {
    return 3.14 * (base) * (altura);
}
double Elipse::perimetro() {
    return M_PI * (3*(this->base + this->altura) - sqrt((3*this->base + this->altura)*(this->base + 3*this->altura)));
}
