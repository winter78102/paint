//
// Created by Bahar on 8/16/2025.
//

#ifndef UNTITLED8_SQUARE_H
#define UNTITLED8_SQUARE_H
#include <iostream>
#include "../shape_merge_class.h"

class Square : public Shape {
public:
    Square(float Side);
    ~Square()=default;
    void Calculation()override;
    float GetSide();
private:
    float _Side;

};



#endif //UNTITLED8_SQUARE_H
