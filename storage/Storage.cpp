
#include "Storage.h"

void Storage::AddShapeList(std::shared_ptr<Shape> NewObject) {
    _ShapeList.push_back(NewObject);
    NewObject->Calculation();

}
std::shared_ptr<Shape> Storage::GetShapeList(int Index) {
    return _ShapeList[Index];
}
int Storage::GetShapeSize(std:: string Name)  {
   int counter=0;
   for(int i=0;i<_ShapeList.size();i++){
       if(_ShapeList[i]->GetName()==Name){
           counter++;
       }
   }
    return counter;
}
void Storage::DeleteShape(int Index) {
 _ShapeList.erase(_ShapeList.begin()+Index);
}
int Storage::GetShapeListSize() {
    return _ShapeList.size();
}






