/*
	Clase: Figura
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle

  Información CRC:

  Clase: Figura

	Responsabilidades:
	- Servir como clase base para otras figuras geométricas.
    - Permitir calcular el área y el perímetro de la figura.
    - Permitir agrandar la figura por un factor dado.
    - Proporcionar un destructor virtual para asegurar la correcta liberación de recursos.

	Colaboradores:
	- NInguno directamente, pero es superclase de Elipse, Rectangulo y Triangulo.

	Autor: Juan Jose Atuesta, Sergio Garcia Ramos, Paula Mariana Huertas
	Correo: atuesta.juan@correounivalle.edu.co - sergio.garcia.ramos@correounivalle.edu.co - murillo.paula@correounivalle.edu.co 
	Fecha: Mayo 2025
*/
#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
using namespace std;
class Figura{
    protected:
        double base;
        double altura;
        double x;
        double y;
    public:
        Figura(double _x, double _y, double _base, double _altura);
        virtual double area()=0; // Método virtual puro
        virtual double perimetro()=0; // Método virtual puro
        void agrandar(double factor);
        virtual ~Figura() {} // Destructor virtual
};

#endif // FIGURA_H