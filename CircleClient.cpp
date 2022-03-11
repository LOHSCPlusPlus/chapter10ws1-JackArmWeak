#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
    Point a(1,1);
    Point b(5,1);

    Line A(a,b);
  
    Circle j(A);

    j.CirclePrint();
    cout << "Area "<< j.circleCalcArea() << endl;
    return 0;
}