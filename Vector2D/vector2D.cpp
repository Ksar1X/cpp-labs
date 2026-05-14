#include "Vector2D.h"

Vector2D::Vector2D(double x_val, double y_val) : x(x_val), y(y_val) {}

Vector2D& Vector2D::operator+=(const Vector2D& other) {
    this->x += other.x;
    this->y += other.y;
    return *this;
}

Vector2D& Vector2D::operator-=(const Vector2D& other) {
    this->x -= other.x;
    this->y -= other.y;
    return *this;
}

Vector2D& Vector2D::operator*=(const Vector2D& other) {
    this->x *= other.x; 
    this->y *= other.y;
    return *this;
}

Vector2D& Vector2D::operator/=(const Vector2D& other) {
    if (other.x != 0) this->x /= other.x;
    if (other.y != 0) this->y /= other.y;
    return *this;
}

Vector2D& Vector2D::operator*=(double scalar) {
    this->x *= scalar;
    this->y *= scalar;
    return *this;
}

Vector2D& Vector2D::operator/=(double scalar) {
    if (scalar != 0) {
        this->x /= scalar;
        this->y /= scalar;
    }
    return *this;
}


Vector2D operator+(Vector2D lhs, const Vector2D& rhs) { return lhs += rhs; }
Vector2D operator-(Vector2D lhs, const Vector2D& rhs) { return lhs -= rhs; }
Vector2D operator*(Vector2D lhs, const Vector2D& rhs) 
{
    Vector2D result = Vector2D();
    result.x = lhs.x * rhs.x;
    return result; 
}
Vector2D operator/(Vector2D lhs, const Vector2D& rhs) { return lhs /= rhs; }
Vector2D operator*(Vector2D lhs, double scalar) { return lhs *= scalar; }
Vector2D operator/(Vector2D lhs, double scalar) { return lhs /= scalar; }

std::ostream& operator<<(std::ostream& os, const Vector2D& vec) {
    os << "Vector(x: " << vec.x << ", y: " << vec.y << ")";
    return os;
}