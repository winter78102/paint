#include <array>
#include <Circle/Circle.h>
#include "cmath"

Circle::Circle(float Radius) {
_Radius=Radius;
_name="Circle";
printf(" a Circle with radius=%f  built\n",Radius);
Calculation();
}
void Circle::Calculation() {

    _Area=M_PI* pow(_Radius,2);
    _Perimeter=2*M_PI*_Radius;
}

std::array<float,3> Circle::GetParameter() {
    return{_Radius,0,0};
}

