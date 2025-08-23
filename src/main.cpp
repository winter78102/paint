
#include <interface/Interface.hpp>


#include <iostream>


int main() {
    Interface InterfaceObject;
    while(1){
        InterfaceObject.Start();

        switch (InterfaceObject.GetLastButton()) {
            case 1:
            InterfaceObject.ChoseShape();
            InterfaceObject.NumberOfShape();
            InterfaceObject.GetParameter();
                break;
            case 2:
                InterfaceObject.ShowList();
                InterfaceObject.ShowDetailedList();
                break;
            case 3:
                InterfaceObject.ShowDeleteList();
                break;
        }



    }


}

