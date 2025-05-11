#define FIGURA_H
#ifdef FIGURA_H
#include <iostream>
using namespace std;
class Figura{
    protected:
        double base;
        double altura;
        double x;
        double y;
    public:
        Figura(double _base, double _altura, double _x, double _y);
        virtual double area(); // Método virtual puro
        virtual double perimetro(); // Método virtual puro
        void agrandar(double factor); // Método virtual puro
        virtual ~Figura() {} // Destructor virtual
};

#endif // FIGURA_H