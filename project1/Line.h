#pragma once
#include "Point.h"
#include <cmath>

class Line {
private:
    Point point1;
    Point point2;

public:
    // Конструктор, принимающий две точки
    Line(const Point& p1, const Point& p2);
    
    // Методы доступа к точкам
    Point getPoint1() const;
    Point getPoint2() const;
    
    // Метод для расчета длины линии между двумя точками
    // Использует формулу расстояния: d = sqrt((x2-x1)^2 + (y2-y1)^2)
    double getLength() const;
};
