#include "line.h"

Line::Line(Point p1, Point p2) 
{
    points[0] = p1;
    points[1] = p2;
}


double Line::getLength() const {
    double dx = points[1].getX() - points[0].getX();
    double dy = points[1].getY() - points[0].getY();
    return std::sqrt(dx * dx + dy * dy);
}

Point* Line::getPoints() {
    return points;
}
