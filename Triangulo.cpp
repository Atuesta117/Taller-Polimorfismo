#include "Triangulo.h"
#include "Figura.h"
using namespace std;
Triangulo::Triangulo(double _base, double _altura, double _x, double _y) : Figura(_base, _altura, _x, _y) {
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

