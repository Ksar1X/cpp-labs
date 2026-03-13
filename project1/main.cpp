#include <iostream>
#include "Line.h"

using namespace std;

int main() {
    Point p1(1, 2);
    Point p2(4, 6);

    cout << endl;
    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    Line *firstLine = new Line(p1, p2);
    double length = firstLine->getLength();

    cout << endl;
    cout << "Distance between points: " << length << endl;

    delete firstLine;

    return 0;
}
