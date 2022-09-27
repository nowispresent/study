// CallByRef.cpp
// Charset : EUC-KR
// Created at : 2022-09-27
// Writer : Nam Hyunjae
#include <iostream>
using namespace std;
const float PI = 3.14159265f;
struct Circle
{
    float radius, cx, cy;
};

// 원의 데이터 입력
void inputData(Circle &c) // 함수 머리부
{
    cout << "원의 반지름 : ";
    cin >> c.radius;
    cout << "중심좌표(x) : ";
    cin >> c.cx;
    cout << "중심좌표(y) : ";
    cin >> c.cy;
}

// 원의 데이터 출력
void prData(const Circle &c) // 함수 머리부
{
    cout << "반지름 = " << c.radius << endl;
    cout << "중심좌표 = (" << c.cx;
    cout << ", " << c.cy << ")" << endl;
}

// 원의 면적 계산
float area(const Circle &c) // 함수 머리부
{
    return PI * c.radius * c.radius;
}

int main()
{
    Circle circle;
    inputData(circle);
    cout << "입력된 원의 정보" << endl;
    prData(circle);
    cout << "원의 면적 = " << area(circle) << endl;
}