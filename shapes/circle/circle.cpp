#include "circle.h"
#include "cmath"

Circle::Circle(float Radius) {
_Radius=Radius;
}
void Circle::Calculation() {
    float Area,Perimetr;
    Area=M_PI* pow(_Radius,2);
    Perimetr=2*M_PI*_Radius;
    SetAre(Area);
    SetPerimeter(Perimetr);
}