#include "Line.h"
#include <iostream>
using namespace std;

int main() {
    Point a(5,7);
    Point b(4,6);

    Line one(a,b);
  
    one.LinePrint();

    cout << " " << one.lineLength() << endl;
  
    return 0;
}
