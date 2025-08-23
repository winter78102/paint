
#ifndef INTERFACE_HPP
#define INTERFACE_HPP
#include <storage/Storage.h>
#include <shapes/Shape.h>
#include <Circle/Circle.h>
#include <Rectangle/Rectangle.h>
#include <Square/Square.h>
#include <triangle/triangle.h>
#include <storage/Storage.h>

class Interface :public Storage{

public:

    void Start();
    void ChoseShape();
    void NumberOfShape();
    void GetParameter();
    void ShowList();
    int GetLastButton();
    void ShowDetailedList();
    void ShowDeleteList();
    int CheckInput(int Button);

private:
    Storage _ShapeStore;
    int _LastButton;
    int _AddedNumber;
};

#endif //UNTITLED8_INTERFACE_HPP
