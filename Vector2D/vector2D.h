#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

class Vector2D {
private:
    double x;
    
public:
    double y;

    Vector2D(double x_val = 0, double y_val = 0);

    Vector2D& operator+=(const Vector2D& other);
    Vector2D& operator-=(const Vector2D& other);
    Vector2D& operator*=(const Vector2D& other);
    Vector2D& operator/=(const Vector2D& other);
    
    Vector2D& operator*=(double scalar);
    Vector2D& operator/=(double scalar);

    friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec);
};

Vector2D operator+(Vector2D lhs, const Vector2D& rhs);
Vector2D operator-(Vector2D lhs, const Vector2D& rhs);
Vector2D operator*(Vector2D lhs, const Vector2D& rhs);
Vector2D operator/(Vector2D lhs, const Vector2D& rhs);

Vector2D operator*(Vector2D lhs, double scalar);
Vector2D operator/(Vector2D lhs, double scalar);

#endif