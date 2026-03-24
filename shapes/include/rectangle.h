#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(const vector<Line>& lines);
    virtual ~Rectangle();

    virtual double calcArea() const override;
    virtual double calcCircum() const override;
};

#endif