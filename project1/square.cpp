#include "square.h"

Square::Square(const vector<Line>& lines) : Rectangle(lines) {}

double Square::calcArea() const {
    if (lines.size() != 4) {
        return 0.0; 
    }
    double side = lines[0].getLength();
    return side * side;
}

double Square::calcCircum() const {
    if (lines.size() != 4) {
        return 0.0; 
    }
    double side = lines[0].getLength();
    return 4 * side;
}

