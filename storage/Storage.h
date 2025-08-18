//
// Created by Bahar on 8/18/2025.
//

#ifndef UNTITLED8_STORAGE_H
#define UNTITLED8_STORAGE_H

#include <vector>
#include "../shapes/shape_merge_class.h"

class Storage {
public:


protected:
    void SetCircleList(shape* NewCircleObject);
    void SetRectangleList(shape* NewRectangleObject);
    void SetTriangleList(shape* NewTriangleObject);
    void SetSquareList(shape* NewSquareObject);

private:
    std::vector<shape*> _CircleList;
    std::vector<shape*> _RectangleList;
    std::vector<shape*> _TriangleList;
    std::vector<shape*> _SquareList;



};


#endif //UNTITLED8_STORAGE_H
