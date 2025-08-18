//
// Created by Bahar on 8/16/2025.
//

#ifndef UNTITLED8_RECTANGLE_H
#define UNTITLED8_RECTANGLE_H
#include "../shape_merge_class.h"

class rectangle : public shape {
protected:
    std::stack<shape*> rectangle_list;


public:
     int get_size() override;
     void add_shape()override;
     void delete_object()override;
};

#endif //UNTITLED8_RECTANGLE_H
