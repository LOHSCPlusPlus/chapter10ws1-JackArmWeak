#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
    Line Length;
    Line Height;
}

Rectangle::Rectangle(Line LenVal, Line HiVal) {
  Length = LenVal;
  Height = HiVal;
}

void Rectangle::RectanglePrint() {
  cout << "Length " << endl;
  Length.LinePrint();
  cout << "Height " << endl;
  Height.LinePrint();
  cout << endl;
}

double Rectangle::calcArea() {
  double tempLen = Length.lineLength();
  double tempHi = Height.lineLength();
  return (tempLen*tempHi);
}