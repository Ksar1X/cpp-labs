#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square final : public Rectangle {
public:
    Square(const vector<Line>& lines);
    
    double calcArea() const override;
    double calcCircum() const override;
};

#endif
