#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
    Point a(1,1);
    Point b(1,10);
    Point c(10,1);
    Point d(10,10);

    Line A(a,b);
    Line B(c,d);
  
    Rectangle t(A,B);

    t.RectanglePrint();
    cout << "Area "<< t.calcArea() << endl;
    return 0;
}
