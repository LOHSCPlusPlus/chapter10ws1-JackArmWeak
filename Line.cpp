#include <iostream>
#include "Line.h"
using namespace std;

Line::Line() {
    Point start;
    Point end;
}

Line::Line(Point startVal, Point endVal) {
  start = startVal;
  end = endVal;
}

void Line::LinePrint() {
  cout << " Start ";
  start.print();
  cout << " End ";
  end.print();
  cout << endl;
}

double Line::lineLength() {
 return start.calcDistance(end);
}