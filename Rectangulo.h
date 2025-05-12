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