
#include "triangle.h"

int triangle::get_size() {
    return triangle_list.size();
}
void triangle::add_shape(){
    triangle_list.push( new rectangle());
    total_list.push(triangle_list.top());
    printf(">>the triangle added\n");

}
void triangle::delete_object(){

    triangle_list.pop();
    total_list.pop();
    printf(">>the triangle deleted\n");

}
