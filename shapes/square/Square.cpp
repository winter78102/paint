#include "Square.h"
#include "cmath"

Square::Square(float Side) {
    _Side=Side;
    _name="Square";
    printf(" a square with side=%f  built\n",Side);
}
float Square::GetSide() {
    return _Side;
}
void Square:: Calculation(){
    _Perimeter=_Side*4;
    _Area= pow(_Side,2);

}
