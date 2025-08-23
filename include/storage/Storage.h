//
// Created by Bahar on 8/18/2025.
//

#ifndef UNTITLED8_STORAGE_H
#define UNTITLED8_STORAGE_H
#include <Shapes/Shape.h>
#include <iostream>
#include <vector>
#include <memory>


class Storage {
public:
    void AddShapeList(std::shared_ptr<Shape> NewCircleObject);
    std::shared_ptr<Shape> GetShapeList( int Index);
    int GetShapeListSize();
    void DeleteShape(int Index);
    int GetShapeSize(std::string);
private:
    std::vector<std::shared_ptr<Shape>> _ShapeList;
};
#endif //UNTITLED8_STORAGE_H
