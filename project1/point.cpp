#include "Point.h"

// Конструктор по умолчанию
Point::Point() : x(0.0), y(0.0) {
}

// Конструктор с параметрами
Point::Point(double x, double y) : x(x), y(y) {
}

// Получить координату X
double Point::getX() const {
    return x;
}

// Получить координату Y
double Point::getY() const {
    return y;
}

// Установить координату X
void Point::setX(double x) {
    this->x = x;
}

// Установить координату Y
void Point::setY(double y) {
    this->y = y;
}

// Проверка, лежит ли точка в первой четверти
bool Point::isInFirstQuarter() const {
    return x > 0 && y > 0;
}
