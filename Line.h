#include "Point.h"

class Line {
  public:
    Line();
    Line(Point startVal, Point endVal);
    void LinePrint();
    double lineLength();
  private:
    Point start;
    Point end;
};