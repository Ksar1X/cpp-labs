#ifndef SHAPE_H
#define SHAPE_H

#include <vector>
#include "Line.h"

using namespace std;

class Shape {
protected:
    vector<Line> lines;

public:

    Shape() {}
    Shape(const vector<Line>& lines);

    virtual ~Shape();

    void setLines(const vector<Line>& lines);
    vector<Line> getLines();

    virtual double calcArea() const = 0;
    virtual double calcCircum() const = 0;
};

#endif