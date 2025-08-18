#include <iostream>
#include "interface/interface.hpp"


int main() {
    interface interface_object;
    int button;
    while(1){

        interface_object.start();
        button=interface_object.get_last_button();
        switch(button){
            case 1:
                interface_object.stage_2_1_3();
                interface_object.stage_3_1();
                break;

            case 2:
                interface_object.stage_1_2();
                break;
            case 3:
                interface_object.stage_2_1_3();
                interface_object.stage_3_3();

        }



    }


}

