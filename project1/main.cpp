#include <iostream>
#include "Point.h"
#include "Line.h"

using namespace std;

Point inputPoint() {
    double x, y;

    do {
        cout << "Enter point coordinates (x y): ";
        cin >> x >> y;

        Point p(x, y);

        if (!p.isInFirstQuarter())
            cout << "Point must be in first quadrant\n";
        else
            return p;

    } while (true);
}


int main() {
    Point p1 = inputPoint();
    Point p2 = inputPoint();

    cout << endl;
    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    Line line(p1, p2);
    double length = line.getLength();

    cout << endl;
    cout << "Distance between points: " << length << endl;

    return 0;
}
