#include "Shape.h"

class EqualiteralTriangle final : public Shape {
public:
    EqualiteralTriangle(const vector<Line>& lines);

    virtual double calcArea() const override;
    virtual double calcCircum() const override;
};

