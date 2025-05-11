#define ELIPSE_H
#ifdef ELIPSE_H
#include "Figura.h"
using namespace std;  

class Elipse : public Figura {
    private:
    public:
        Elipse(double _base, double _altura, double _x, double _y);
        double area();
        double perimetro();
        void agrandar(double factor);
};

#endif // ELIPSE_H