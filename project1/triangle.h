#pragma "once"
#include "Shape.h"

class Triangle : public Shape {

protected:
    double high = 0.0;
public:
    Triangle(const vector<Line>& lines);
    Triangle(const vector<Line>& lines, double high);

    double getHigh() const;
    void setHigh(double high);

    virtual double calcArea() const override;
    virtual double calcCircum() const override;
};