
#ifndef UNTITLED8_CIRCLE_H
#define UNTITLED8_CIRCLE_H
#include <iostream>
#include "../shape_merge_class.h"

class circle: public shape {
protected:
    std::stack<shape*> circle_list;



public:
    int get_size() override;
    void add_shape()override;
    void delete_object()override;
};



#endif //UNTITLED8_CIRCLE_H
