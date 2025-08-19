
#include "Interface.hpp"
void Interface::Start(){
    printf(">>choose one of these options with write their number");
    printf(" \n    >>1- add new shape  \n    >>2- watch the list \n    >>3- delete a shape \n");
    printf(">>");
    scanf("%d", &_LastButton);
}
void Interface::ChoseShape(){
    printf(">>please choose your desire shape \n");
    printf("1 -> rectangle\n2 -> circle\n3 -> triangle\n4 -> square\n");
    printf(">>");
    scanf("%d", &_LastButton);
}
void Interface::NumberOfShape() {

    printf(">>how many do you want to add from this shape? enter the number \n>>");
    std::cin>>_AddedNumber;
}
void Interface::GetParameter() {
    float Length,Width;
    float Radius;
    float Side1,Side2,Side3;
    for (int i = 0; i < _AddedNumber; i++) {
        switch(_LastButton) {
            case 1:
                printf(">> type the length \n");
                std::cin >> Length;
                printf(">> type the Width \n");
                std::cin >> Width;
                _ShapeStore.AddShapeList(std::make_shared<Rectangle>(Length, Width));
                break;
            case 2:
                printf(">> type the radius \n");
                std::cin >> Radius;
                _ShapeStore.AddShapeList((std::make_shared<Circle>(Radius)));
                break;
            case 3:
                printf(">> type the  first Side \n");
                std::cin >> Side1;
                printf(">> type the  second Side \n");
                std::cin >> Side2;
                printf(">> type the  third Side \n");
                std::cin >> Side3;
                _ShapeStore.AddShapeList(std::make_shared<Triangle>(Side1,Side2,Side3));
                break;
            case 4:
                printf(">> type the  Side \n");
                std::cin >> Side1;
                _ShapeStore.AddShapeList(std::make_shared<Square>(Side1));
                break;
        }
    }
}

void Interface::ShowList(){
    printf(">> chose one of the shape for further details\n");
    printf(">>\n1-> rectangle    number = %d\n", _ShapeStore.GetShapeSize("Rectangle"));
    printf("2 -> circle       number = %d\n",_ShapeStore.GetShapeSize("Circle"));
    printf("3 -> triangle     number = %d\n",_ShapeStore.GetShapeSize("Triangle"));
    printf("4 -> square       number = %d\n",_ShapeStore.GetShapeSize("Square"));
    std::cin>>_LastButton;
}

void Interface::ShowDetailedList() {
    int Counter=1;
    switch(_LastButton) {
        case 1:
            for (int i = 0; i < _ShapeStore.GetShapeListSize(); ++i) {
                if(_ShapeStore.GetShapeList(i)->GetName()=="Rectangle")
                    printf(">> number %d Rectangle   : Area=%f and  Perimeter=%f\n"
                            ,Counter++,_ShapeStore.GetShapeList(i)->GetArea(),_ShapeStore.GetShapeList(i)->GetPerimeter());
            }
            break;
        case 2:
            for (int i = 0; i < _ShapeStore.GetShapeListSize(); ++i) {
                if(_ShapeStore.GetShapeList(i)->GetName()=="Circle")
                    printf(">> number %d Circle   : Area=%f and  Perimeter=%f\n"
                            ,Counter++,_ShapeStore.GetShapeList(i)->GetArea(),_ShapeStore.GetShapeList(i)->GetPerimeter());
            }
            break;
        case 3:
            for (int i = 0; i < _ShapeStore.GetShapeListSize(); ++i) {
                if(_ShapeStore.GetShapeList(i)->GetName()=="Triangle")
                    printf(">> number %d Triangle   : Area=%f and  Perimeter=%f\n"
                            ,Counter++,_ShapeStore.GetShapeList(i)->GetArea(),_ShapeStore.GetShapeList(i)->GetPerimeter());
            }
            break;
        case 4:
            for (int i = 0; i < _ShapeStore.GetShapeListSize(); ++i) {
                if(_ShapeStore.GetShapeList(i)->GetName()=="Square")
                    printf(">> number %d Square   : Area=%f and  Perimeter=%f\n"
                            ,Counter++,_ShapeStore.GetShapeList(i)->GetArea(),_ShapeStore.GetShapeList(i)->GetPerimeter());
            }
            break;
    }
}
int Interface:: GetLastButton(){
    return _LastButton;
}
void Interface::ShowDeleteList(){
    printf(">>chose one of the listed shape to delete\n");
    for (int i = 0; i <_ShapeStore.GetShapeListSize(); i++) {
        printf(" %d- name=%s  Area:%f  Perimeter:%f \n ", i + 1, _ShapeStore.GetShapeList(i)->GetName().c_str(),
               _ShapeStore.GetShapeList(i)->GetArea(), _ShapeStore.GetShapeList(i)->GetPerimeter());
    }
    std::cin>>_LastButton;
    _ShapeStore.DeleteShape(_LastButton-1);
    printf(">>the  %s deleted\n",_ShapeStore.GetShapeList(_LastButton-1)->GetName().c_str());
}
