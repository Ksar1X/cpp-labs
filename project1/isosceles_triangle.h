#include "triangle.h"

class IsoscelesTriangle final : public Triangle {
public:
    IsoscelesTriangle(const vector<Line>& lines);
    IsoscelesTriangle(const vector<Line>& lines, double high);

    virtual double calcArea() const override;
    virtual double calcCircum() const override;
};