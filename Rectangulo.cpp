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
