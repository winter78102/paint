#include <Square/Square.h>
#include "cmath"
#include <array>

Square::Square(float Side):_Side(Side) {
    _name="Square";
    printf(" a Square with side=%f  built\n",Side);
}

void Square:: Calculation(){
    _Perimeter=_Side*4;
    _Area= pow(_Side,2);
}
float Square::GetSide(){
    return _Side;
}
