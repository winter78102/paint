
#include <iostream>
#include <stack>
#ifndef UNTITLED8_SHAPE_HPP
#define UNTITLED8_SHAPE_HPP


class Shape {
protected:

public:

   virtual void AddShape()=0;
   virtual void DeleteObject()=0;
   virtual void Calculation()=0;
   float GetPerimeter();
   void SetPerimeter(float CalculatedParimeter);
   float GetArea();
   void SetAre(float CalculatedArea);

private:
    float _Perimeter;
    float _Area;

};





#endif //UNTITLED8_SHAPE_HPP
