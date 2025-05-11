#include "Figura.h"
using namespace std;
Figura::Figura(double _base, double _altura, double _x, double _y){
    this->base = _base;
    this->altura = _altura;
    this->x = _x;
    this->y = _y;
}

Figura::~Figura() {
    // Destructor virtual
}
double Figura::area() {
    return 0; // Método virtual puro
}
double Figura::perimetro() {
    return 0; // Método virtual puro
}

void Figura::agrandar(double factor){
    this->base *= factor;
    this->altura *= factor;
    this->x *= factor;
}