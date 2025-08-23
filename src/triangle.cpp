
#include <triangle/triangle.h>

Triangle::Triangle(float Side1, float Side2, float Side3) {
    _Side1=Side1;
    _Side2=Side2;
    _Side3=Side3;
    _name="Triangle";
    printf(" a triangle with side1=%f , side2=%f and side3=%f  built\n",Side1,Side2,Side3);
}

void Triangle::Calculation() {
    float HalfPerimeter,Base;
    _Perimeter=(_Side1+_Side2+_Side3);
    HalfPerimeter=(_Perimeter/2);
    Base=(HalfPerimeter*(HalfPerimeter-_Side1)*(HalfPerimeter-_Side2)*(HalfPerimeter-_Side3));
    _Area=pow(Base,0.5);

}

float Triangle:: GetSide1(){
    return _Side1;
}
float Triangle:: GetSide2(){
    return _Side2;
}
float Triangle:: GetSide3(){
    return _Side3;
}


