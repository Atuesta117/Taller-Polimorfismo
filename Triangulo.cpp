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

