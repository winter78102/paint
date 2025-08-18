
#ifndef UNTITLED8_TRIANGLE_H
#define UNTITLED8_TRIANGLE_H
#include <iostream>
#include "../shape_merge_class.h"

class triangle: public shape {
protected:
    std::stack<shape*> triangle_list;


public:
    int get_size() override;
    void add_shape()override;
    void delete_object()override;
};




#endif //UNTITLED8_TRIANGLE_H
