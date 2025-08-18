#include "../shape_merge_class.h"


int square::get_size() {
    return square_list.size();
}
void square::add_shape(){
    square_list.push( new rectangle());
    total_list.push(square_list.top());
    printf(">>the square added\n");

}
void square::delete_object(){
    square_list.pop();

    total_list.pop();

    printf(">>the square added\n");
}
