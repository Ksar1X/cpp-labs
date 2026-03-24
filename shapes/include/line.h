#pragma once
#include "point.h"

class Line {
private:
    Point points[2];

public:
    
    Line(Point p1, Point p2);

    Point* getPoints();
    
    double getLength() const;
};
