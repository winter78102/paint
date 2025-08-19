//
// Created by Bahar on 8/16/2025.
//

#ifndef UNTITLED8_RECTANGLE_H
#define UNTITLED8_RECTANGLE_H
#include "../shape_merge_class.h"

class Rectangle : public Shape {
public:
    Rectangle(float Length , float _Width);
    ~Rectangle()=default;
    void Calculation()override;
    float GetLength();
    float GetWidth();
private:
    float _Length;
    float _Width;
};


#endif //UNTITLED8_RECTANGLE_H
