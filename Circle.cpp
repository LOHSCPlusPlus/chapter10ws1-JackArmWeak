#include "Circle.h"
#include <math.h>
#include <iostream>
using namespace std;

Circle::Circle() {
  Line radius;
}

Circle::Circle(Line radiusVal) {
  radius = radiusVal;
}

void Circle::CirclePrint() {
  cout << "Radius " << endl;
  radius.LinePrint();
  cout << endl;
}

double Circle::circleCalcArea() {
  double tempRad = radius.lineLength();
  return (M_PI * pow(tempRad,2));
}