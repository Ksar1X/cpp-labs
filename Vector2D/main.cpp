#include <iostream>
#include "Vector2D.h"

int main() {
    Vector2D v1(10.0, 5.0);
    Vector2D v2(2.0, 2.0);

    Vector2D v3 = v1 + v2;
    Vector2D v4 = v1 - v2;

    v1 += v2;      
    v1 *= 2.0;     

    std::cout << "Result v1: " << v1 << std::endl;
    std::cout << "Result v3 (v1+v2): " << v3 << std::endl;

    v1.y = 100.0;

    return 0;
}