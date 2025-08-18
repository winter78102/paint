

#include "circle.h"

int circle::get_size() {
    return circle_list.size();
}
void circle::add_shape(){
    circle_list.push( new rectangle());
    total_list.push(circle_list.top());
    printf(">>the circle added\n");
}
void circle::delete_object(){

    circle_list.pop();
    total_list.pop();

    printf(">>the circle deleted\n");
}
