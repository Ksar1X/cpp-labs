#include "equilateral_triangle.h"

EqualiteralTriangle::EqualiteralTriangle(const vector<Line>& lines) : Shape(lines) {}

double EqualiteralTriangle::calcArea() const {
    double side = lines[0].getLength();
    return (sqrt(3) / 4) * side * side;
}

double EqualiteralTriangle::calcCircum() const {
    double side = lines[0].getLength();
    return 3 * side;
}
