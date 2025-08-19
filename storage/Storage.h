//
// Created by Bahar on 8/18/2025.
//

#ifndef UNTITLED8_STORAGE_H
#define UNTITLED8_STORAGE_H
#include <vector>
#include <memory>
#include "../shapes/shape_merge_class.h"

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
