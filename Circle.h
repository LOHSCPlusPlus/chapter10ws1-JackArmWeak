#include "Line.h"

class Circle {
  public:
    Circle();
    Circle(Line radius);
    void CirclePrint();
    double circleCalcArea();
  private:
    Line radius;
};