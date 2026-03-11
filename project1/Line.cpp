#include "Line.h"

Line::Line(const Point& p1, const Point& p2) : point1(p1), point2(p2) {
}

Point Line::getPoint1() const {
    return point1;
}

Point Line::getPoint2() const {
    return point2;
}


double Line::getLength() const {
    double dx = point2.getX() - point1.getX();
    double dy = point2.getY() - point1.getY();
    return std::sqrt(dx * dx + dy * dy);
}
