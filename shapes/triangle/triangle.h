
#ifndef UNTITLED8_TRIANGLE_H
#define UNTITLED8_TRIANGLE_H
#include <iostream>
#include "../shape_merge_class.h"

class Triangle: public Shape {
public:
    Triangle(float Side1,float Side2 , float Side3);
    Triangle()=default;
    void Calculation()override;
    float GetSide1();
    float GetSide2();
    float GetSide3();
private:
    float _Side1;
    float _Side2;
    float _Side3;

};


#endif //UNTITLED8_TRIANGLE_H
