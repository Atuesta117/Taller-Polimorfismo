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