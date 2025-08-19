
#ifndef UNTITLED8_INTERFACE_HPP
#define UNTITLED8_INTERFACE_HPP
#include "../shapes/shape_merge_class.h"

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
    void DeleteObject();

private:
    Storage _ShapeStore;
    int _LastButton;
    int _AddedNumber;
};

#endif //UNTITLED8_INTERFACE_HPP
