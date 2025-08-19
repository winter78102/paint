
#include <iostream>
#include <stack>
#include <memory>

#ifndef UNTITLED8_SHAPE_HPP
#define UNTITLED8_SHAPE_HPP


class Shape {

public:
    Shape()=default;
   virtual void Calculation()=0;
   float GetPerimeter();
   float GetArea();
   int GetId();
   std::string GetName();
    std::shared_ptr<Shape> Storage;

protected:
    std::string _name;
    int _Id;
    float _Perimeter;
    float _Area;
};

#endif //UNTITLED8_SHAPE_HPP
