//
// Created by Bahar on 8/16/2025.
//

#ifndef UNTITLED8_SQUARE_H
#define UNTITLED8_SQUARE_H
#include <iostream>
#include "../shape_merge_class.h"

class square : public shape {
protected:
    std::stack<shape*> square_list;


public:
    int get_size() override;
    void add_shape()override;
    void delete_object()override;
};


#endif //UNTITLED8_SQUARE_H
