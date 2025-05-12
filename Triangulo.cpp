/**
* @file Triangulo.cpp
* @brief Implementación de la clase Triangulo, que hereda de Figura.
*
* @details
* Este archivo contiene la implementación de la clase Triangulo.
* Esta clase calcula el area y el perímetro de un rectángulo dado su base y altura, no obstante con el perimetro lanza un mensaje de error pues para conocer este se necesitan mas datos.
* La clase Triangulo hereda de la clase Figura, que es una clase abstracta.
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

#include "Triangulo.h"
#include "Figura.h"
using namespace std;
Triangulo::Triangulo(double _x, double _y, double _base, double _altura) : Figura(_x, _y, _base, _altura) {
    this->base = _base;
    this->altura = _altura;
    this->x = _x;
    this->y = _y;
}

double Triangulo::area() {
    return (base * altura) / 2;
}
double Triangulo::perimetro() {
    cout << "Faltan datos para calcular el perimetro del triangulo" << endl;
    return 0;
}

