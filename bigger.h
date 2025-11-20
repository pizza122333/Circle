#ifndef BIGGER_H
#define BIGGER_H

// 템플릿 함수 정의
template <typename T>
T bigger(T a, T b) {
    if (a > b) return a;
    else return b;
}

#endif
