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
