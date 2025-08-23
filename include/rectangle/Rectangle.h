//
// Created by Bahar on 8/16/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <Shapes/Shape.h>
#include <iostream>


class Rectangle : public Shape {
public:
    Rectangle(float Length , float _Width);
    ~Rectangle()=default;
    void Calculation()override;
    std::array<float,3> GetParameter()override;


private:
    float _Length;
    float _Width;
};


#endif //RECTANGLE_H
