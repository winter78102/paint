#include <Rectangle/Rectangle.h>
#include <array>
#include "iostream"


Rectangle::Rectangle(float Length, float Width) {
    _Length=Length;
    _Width=Width;
    _name="Rectangle";
    printf(" a rectangle with length=%f and width=%f built\n",Length,Width);
    }


void Rectangle::Calculation() {
    _Area = _Length * _Width;
    _Perimeter = 2 * (_Length + _Width);
}
std::array<float,3> Rectangle:: GetParameter(){

    return {_Length,_Width,0};

}
