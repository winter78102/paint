
#include "iostream"
#include "../shape_merge_class.h"

Rectangle::Rectangle(float Length, float Width) {
    _Length=Length;
    _Width=Width;
    _name="Rectangle";
    printf(" a rectangle with length=%f and width=%f built\n",Length,Width);
    }
float Rectangle::GetLength(){
    return _Length;
}
float Rectangle::GetWidth(){
    return _Width;
}

void Rectangle::Calculation() {
    _Area = _Length * _Width;
    _Perimeter = 2 * (_Length + _Width);
}