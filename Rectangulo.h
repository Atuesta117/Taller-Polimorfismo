/*
	Clase: Rectangulo
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle

  Información CRC:

  Clase: Figura

	Responsabilidades:
	- Representar un rectángulo con su base, altura y coordenadas x e y.
    - Permitir calcular el área y el perímetro del rectángulo.

	Colaboradores:
	- Figura (superclase).

	Autor: Juan Jose Atuesta, Sergio Garcia Ramos, Paula Mariana Huertas
	Correo: atuesta.juan@correounivalle.edu.co - sergio.garcia.ramos@correounivalle.edu.co - murillo.paula@correounivalle.edu.co 
	Fecha: Mayo 2025
*/
#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Figura.h"
using namespace std;

class Rectangulo : public Figura {
    private:
    public:
        Rectangulo(double _x, double _y, double _base, double _altura);
        double area()override;
        double perimetro()override;

};

#endif // RECTANGULO_H