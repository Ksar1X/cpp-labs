#include <iostream>
#include "Point.h"
#include "Line.h"

using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "=== Program for calculating the distance between two points ===" << endl;
    cout << endl;

    do {
        cout << "Enter coordinates of the first point (must be in first quadrant, x > 0 and y > 0):" << endl;
        cout << "X1: ";
        cin >> x1;
        cout << "Y1: ";
        cin >> y1;
        if (!(x1 > 0 && y1 > 0)) {
            cout << "Error: Point must be in the first quadrant. Please try again." << endl;
            cout << endl;
        }
    } while (!(x1 > 0 && y1 > 0));

    do {
        cout << endl;
        cout << "Enter coordinates of the second point (must be in first quadrant, x > 0 and y > 0):" << endl;
        cout << "X2: ";
        cin >> x2;
        cout << "Y2: ";
        cin >> y2;
        if (!(x2 > 0 && y2 > 0)) {
            cout << "Error: Point must be in the first quadrant. Please try again." << endl;
            cout << endl;
        }
    } while (!(x2 > 0 && y2 > 0));

    Point p1(x1, y1);
    Point p2(x2, y2);

    cout << endl;
    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    Line line(p1, p2);
    double length = line.getLength();

    cout << endl;
    cout << "Distance between points: " << length << endl;

    return 0;
}
