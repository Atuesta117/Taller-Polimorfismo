/*
	Clase: Triangulo
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle

  Información CRC:

  Clase: Triangulo

	Responsabilidades:
	- Representar un triangulo con su base, altura y coordenadas x e y.
    - Permitir calcular el área y el perímetro del triagulo.

	Colaboradores:
	- Figura (superclase).

	Autor: Juan Jose Atuesta, Sergio Garcia Ramos, Paula Mariana Huertas
	Correo: atuesta.juan@correounivalle.edu.co - sergio.garcia.ramos@correounivalle.edu.co - murillo.paula@correounivalle.edu.co 
	Fecha: Mayo 2025
*/
#ifndef TRIANGULO_H
#define TRIANGULO_H
using namespace std;
#include "Figura.h"
class Triangulo : public Figura {
    private:
    public:
        Triangulo(double _x, double _y, double _base, double _altura);
        double area()override;
        double perimetro()override;

};

#endif // TRIANGULO_H