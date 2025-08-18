
#include <iostream>
#include <stack>
#ifndef UNTITLED8_SHAPE_HPP
#define UNTITLED8_SHAPE_HPP


class shape {
    int total_number;
protected:
    std::stack<shape*> total_list;



public:


   virtual int get_size()=0;
   virtual void add_shape()=0;
   virtual void delete_object()=0;

};





#endif //UNTITLED8_SHAPE_HPP
