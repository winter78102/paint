
#include <iostream>
#include <stack>
#include <memory>

#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <iostream>

class Shape {

public:
    Shape()=default;
   virtual void Calculation()=0;
   virtual std::array<float,3> GetParameter()=0;
   float GetPerimeter();
   float GetArea();
   std::string GetName();


protected:
    std::string _name;
    float _Perimeter;
    float _Area;

};

#endif //SHAPE_HPP
