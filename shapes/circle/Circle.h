
#ifndef UNTITLED8_CIRCLE_H
#define UNTITLED8_CIRCLE_H
#include <iostream>
#include "../shape_merge_class.h"

class Circle :public Shape {
public:
    Circle(float Radius);
    ~Circle()=default;
    void Calculation()override;
    float GetRadius();
private:
    float _Radius;
};



#endif //UNTITLED8_CIRCLE_H
