//
// Created by Bahar on 8/18/2025.
//

#include "Storage.h"


void Storage::SetCircleList(shape* NewCircleObject){
    _CircleList.push_back(NewCircleObject);
}
void Storage::SetRectangleList(shape *NewRectangleObject) {
    _RectangleList.push_back(NewRectangleObject);
}
void Storage::SetTriangleList(shape *NewTriangleObject) {
    _TriangleList.push_back(NewTriangleObject);
}
void Storage::SetSquareList(shape *NewSquareObject) {
    _SquareList.push_back(NewSquareObject);
}
