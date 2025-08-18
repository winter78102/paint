
#include "iostream"
#include "../shape_merge_class.h"

Rectangle::Rectangle(float Length, float Width) {
    _Length=Length;
    _Width=Width;
}
float Rectangle::GetLength(){
    return _Length;
}
float Rectangle::GetWidth(){
    return _Width;
}

void Rectangle::Calculation() {
    float Area,Perimeter;
    Area=_Length*_Width;
    Perimeter=2*(_Length+_Width);
    SetPerimeter(Perimeter);
    SetAre(Area);
}