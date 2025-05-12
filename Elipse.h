/*
	Clase: 	Elipse
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle

  Información CRC:

  Clase: Elipse

	Responsabilidades:
	- Representar una elipse con su base, altura y coordenadas x e y.
    - Permitir calcular el área y el perímetro de la elipse.


	Colaboradores:
	- Figura (superclase).

	Autor: Juan Jose Atuesta, Sergio Garcia Ramos, Paula Mariana Huertas
	Correo: atuesta.juan@correounivalle.edu.co - sergio.garcia.ramos@correounivalle.edu.co - murillo.paula@correounivalle.edu.co 
	Fecha: Mayo 2025
*/
#ifndef ELIPSE_H
#define ELIPSE_H
#include "Figura.h"
using namespace std;  

class Elipse : public Figura {
    private:
    public:
        Elipse(double _x, double _y, double _base, double _altura);
        double area()override;
        double perimetro()override;
        void agrandar(double factor);
};

#endif // ELIPSE_H