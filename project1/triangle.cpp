#include "Triangle.h"

Triangle::Triangle(const vector<Line>& lines) : Shape(lines) {}

Triangle::Triangle(const vector<Line>& lines, double high) : Shape(lines), high(high) {}

double Triangle::getHigh() const {
    return high;
}

void Triangle::setHigh(double high) {
    this->high = high;
}

double Triangle::calcArea() const {
    double base = calcCircum() / 2.0;
    return 0.5 * base * high;
}

double Triangle::calcCircum() const {
    return lines[0].getLength() + lines[1].getLength() + lines[2].getLength();
}