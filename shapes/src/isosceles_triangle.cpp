#include "isosceles_triangle.h"

IsoscelesTriangle::IsoscelesTriangle(const vector<Line>& lines) : Triangle(lines) {}

IsoscelesTriangle::IsoscelesTriangle(const vector<Line>& lines, double high) : Triangle(lines, high) {}

double IsoscelesTriangle::calcArea() const {
    double base = calcCircum() / 2.0;
    return 0.5 * base * getHigh();
}

double IsoscelesTriangle::calcCircum() const {
    float a = lines[0].getLength();
    float b = lines[1].getLength();
    float c = lines[2].getLength();

    if (abs(a - b) < 0.001) return 2 * a + c;
    if (abs(a - c) < 0.001) return 2 * a + b;
    return 2 * b + a;
}
