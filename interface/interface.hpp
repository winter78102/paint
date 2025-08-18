//
// Created by Bahar on 8/17/2025.
//

#ifndef UNTITLED8_INTERFACE_HPP
#define UNTITLED8_INTERFACE_HPP
#include "../shapes/shape_merge_class.h"


class interface :public rectangle, public triangle,public circle, public square {
    int last_button;


public:


    void start();

    void stage_2_1_3();

    void stage_3_1();

    void stage_1_2();

    void stage_3_3();

    int get_number_in_list(int object_index);

    int get_last_button();



};


#endif //UNTITLED8_INTERFACE_HPP
