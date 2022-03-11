#include "Line.h"

class Rectangle {
  public:
    Rectangle();
    Rectangle(Line LenVal, Line HiVal);
    void RectanglePrint();
    double calcArea();
  private:
    Line Length;
    Line Height;
};