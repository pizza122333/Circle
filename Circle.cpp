#include "Circle.h"

// 생성자
Circle::Circle(int radius) {
    this->radius = radius;
}

// 반지름 반환
int Circle::getRadius() const {
    return radius;
}

// > 연산자 오버로딩
bool Circle::operator>(const Circle& other) const {
    return this->radius > other.radius;
}
