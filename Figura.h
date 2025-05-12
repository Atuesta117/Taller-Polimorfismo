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