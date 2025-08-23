
#ifndef CIRCLE_H
#define CIRCLE_H
#include <Shapes/Shape.h>
#include <iostream>


class Circle :public Shape {
public:
    Circle(float Radius);
    ~Circle()=default;
    void Calculation()override;
    std::array<float,3> GetParameter()override;
private:
    float _Radius;
};



#endif //CIRCLE_H
