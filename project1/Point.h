#pragma once
#include <cmath>

class Point {
private:
    double x = 0.0;
    double y = 0.0;

public:
    Point();
    Point(double x, double y);
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    
    bool isInFirstQuarter() const;
    bool isDigit() const;
};

