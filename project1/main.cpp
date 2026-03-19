#include <iostream>
#include <vector>
#include "square.h"
#include "Point.h"
#include "Line.h"

using namespace std;

int main() {
    vector<Shape*> shapes;

    Point p1(0, 0);
    Point p2(2, 0);
    Point p3(2, 2);
    Point p4(0, 2);

    vector<Line> lines = {
        Line(p1, p2),
        Line(p2, p3),
        Line(p3, p4),
        Line(p4, p1)
    };

    Shape* square = new Square(lines);

    shapes.push_back(square);

    for (Shape* shape : shapes) {
        cout << "Area of square is: " << shape->calcArea() << endl;
        cout << "Circumference of square is: " << shape->calcCircum() << endl;
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}