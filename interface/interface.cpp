
#include "interface.hpp"
void interface::start(){
    printf(">>choose one of these options with write their number");
    printf(" \n    >>1- add new shape  \n    >>2- watch the list \n    >>3- delete a shape \n");
    printf(">>");
    scanf("%d", &last_button);
}
void interface::stage_2_1_3(){
    printf(">>please choose your desire shape \n");
    printf("1 -> rectangle\n2 -> circle\n3 -> triangle\n4 -> square\n");
    printf(">>");
    scanf("%d", &last_button);
}
void interface::stage_3_1() {

    printf(">>how many do you want to add from this shape? enter the number \n>>");
    int added_number;
    scanf("%d", &added_number);
    for (int i = 0; i < added_number; i++) {
        switch(last_button){
            case 1:
                rectangle::add_shape();
                break;
            case 2:
                circle::add_shape();
                break;
            case 3:
                triangle::add_shape();
                break;
            case 4:
                square::add_shape();
                break;
        }
    }

}
void interface::stage_1_2(){

    printf(">>\n1-> rectangle     number = %d\n",rectangle_list.size());
    printf("2 -> circle       number = %d\n",circle_list.size());
    printf("3 -> triangle     number = %d\n",triangle_list.size());
    printf("4 -> square       number = %d\n",square_list.size());

}


void interface::stage_3_3() {
    printf(">>how many do you want to delete from this shape? enter the number \n>>");
    int deleted_number;
    scanf("%d", &deleted_number);
    if (deleted_number <= get_number_in_list(last_button)) {
        for (int i = 0; i < deleted_number; i++) {
            switch (last_button) {
                case 1:
                    rectangle::delete_object();
                    break;
                case 2:
                    circle::delete_object();
                    break;
                case 3:
                    triangle::delete_object();
                    break;
                case 4:
                    square::delete_object();
                    break;
            }
        }
    }

    else{
        printf("there are not enough object to delete\n");
    }
}

int interface:: get_last_button(){
    return last_button;
}
int interface::get_number_in_list(int object_index) {
    switch(object_index){
        case 1:
            return rectangle::get_size();
        case 2:
            return circle::get_size();
        case 3:
            return triangle::get_size();
        case 4:
            return square::get_size();
    }
}