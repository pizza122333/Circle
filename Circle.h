#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
    int radius;
public:
    Circle(int radius = 1);
    int getRadius() const;

    // > 연산자 오버로딩
    bool operator>(const Circle& other) const;
};

#endif
