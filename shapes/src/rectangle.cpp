#include "rectangle.h"

Rectangle::Rectangle(const vector<Line>& lines) : Shape(lines) {}

Rectangle::~Rectangle() {}

double Rectangle::calcArea() const {
    if (lines.size() != 4) {
        return 0.0; 
    }
    double length = lines[0].getLength();
    double width = lines[1].getLength();
    return length * width;
}

double Rectangle::calcCircum() const {
    if (lines.size() != 4) {
        return 0.0; 
    }
    double length = lines[0].getLength();
    double width = lines[1].getLength();
    return 2 * (length + width);
}