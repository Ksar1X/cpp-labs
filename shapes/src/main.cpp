#include <iostream>
#include <vector>

#include "square.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"

using namespace std;

int main() {

    vector<Shape*> shapes;

    //square
    Point p1(0, 0);
    Point p2(2, 0);
    Point p3(2, 2);
    Point p4(0, 2);

    vector<Line> squareLines = {
        Line(p1, p2),
        Line(p2, p3),
        Line(p3, p4),
        Line(p4, p1)
    };

    shapes.push_back(new Square(squareLines));

    // isoscles triangle
    Point t1(0, 0);
    Point t2(4, 0);
    Point t3(2, 3);

    vector<Line> isoLines = {
        Line(t1, t2),
        Line(t2, t3),
        Line(t3, t1)
    };

    shapes.push_back(new IsoscelesTriangle(isoLines, 3));

    // equilateral triangle
    Point e1(0, 0);
    Point e2(2, 0);
    Point e3(1, 1.732);

    vector<Line> eqLines = {
        Line(e1, e2),
        Line(e2, e3),
        Line(e3, e1)
    };

    shapes.push_back(new EqualiteralTriangle(eqLines));

    for (Shape* shape : shapes) {
        cout << "Area: " << shape->calcArea() << endl;
        cout << "Circumference: " << shape->calcCircum() << endl;
        cout << "------------------" << endl;
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}