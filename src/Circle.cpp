
#include <Circle/Circle.h>
#include <array>
#include "cmath"

Circle::Circle(float Radius ):_Radius(Radius) {

_name="Circle";
printf(" a Circle with radius=%f  built\n",Radius);
Calculation();
}

void Circle::Calculation() {

    _Area=M_PI* pow(_Radius,2);
    _Perimeter=2*M_PI*_Radius;
}


float Circle:: GetRadius(){
    return _Radius;
}

