#include "shape.h"

Shape::Shape(const vector<Line>& lines) : lines(lines) {}

Shape::~Shape() {}

void Shape::setLines(const vector<Line>& lines) {
    this->lines = lines;
}

vector<Line> Shape::getLines() {
    return lines;
}

