#include "Shape.h"

float Shape::GetPerimeter(){
    return _Perimeter;
}
void Shape::SetPerimeter(float CalculatedPerimeter) {
    _Perimeter=CalculatedPerimeter;
}
float Shape::GetArea() {
    return _Area;
}
void Shape::SetAre(float CalculatedArea) {
    _Area=CalculatedArea;
}