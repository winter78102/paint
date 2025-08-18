
#include "iostream"
#include "../shape_merge_class.h"


int rectangle::get_size() {
    return rectangle_list.size();
}
void rectangle::add_shape(){
    rectangle_list.push( new rectangle());
    total_list.push(rectangle_list.top());
    printf(">>the rectangle added\n");

}
void rectangle::delete_object(){

    rectangle_list.pop();
    total_list.pop();

    printf(">>the rectangle deleted\n");
}
