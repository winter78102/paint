//
// Created by Bahar on 8/16/2025.
//

#ifndef SQUARE_H
#define SQUARE_H
#include <Shapes/Shape.h>
#include <iostream>

class Square : public Shape {
public:
    Square(float Side);
    ~Square()=default;
    void Calculation()override;
    float GetSide();



private:
    float _Side;

};



#endif //SQUARE_H
