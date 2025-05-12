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