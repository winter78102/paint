
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <Shapes/Shape.h>
#include <cmath>
#include <array>
#include <iostream>

class Triangle: public Shape {
public:
    Triangle(float Side1,float Side2 , float Side3);
    Triangle()=default;
    void Calculation()override;
    std::array<float,3> GetParameter()override;

private:
    float _Side1;
    float _Side2;
    float _Side3;

};


#endif //TRIANGLE_H
