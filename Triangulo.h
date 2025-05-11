#define TRIANGULO_H
#ifdef TRIANGULO_H
using namespace std;
#include "Figura.h"
class Triangulo : public Figura {
    private:
    public:
        Triangulo(double _base, double _altura, double _x, double _y);
        double area();
        double perimetro();

};

#endif // TRIANGULO_H