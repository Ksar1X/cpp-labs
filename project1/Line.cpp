#include "Line.h"

// Конструктор, принимающий две точки
Line::Line(const Point& p1, const Point& p2) : point1(p1), point2(p2) {
}

// Получить первую точку
Point Line::getPoint1() const {
    return point1;
}

// Получить вторую точку
Point Line::getPoint2() const {
    return point2;
}

// Вычислить расстояние между двумя точками
// Используется формула расстояния: d = sqrt((x2-x1)^2 + (y2-y1)^2)
double Line::getLength() const {
    double dx = point2.getX() - point1.getX();
    double dy = point2.getY() - point1.getY();
    return std::sqrt(dx * dx + dy * dy);
}
