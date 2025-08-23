
#ifndef CIRCLE_H
#define CIRCLE_H
#include <Shapes/Shape.h>
#include <iostream>


class Circle :public Shape {
public:
    Circle(float Radius);
    ~Circle()=default;
    void Calculation()override;
    float GetRadius();
private:
    float _Radius;
};



#endif //CIRCLE_H
