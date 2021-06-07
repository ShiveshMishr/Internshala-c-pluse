#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double getArea() = 0;
};

class Square : public Shape
{
public:
    float side;
    virtual double getArea()
    {

        return side * side;
    }
};

class Rectangle : public Shape
{
public:
    float length;
    float breath;
    virtual double getArea()
    {

        return length * breath;
    }
};

class Circle : public Shape
{
public:
    float radius;
    virtual double getArea()
    {

        return 3.14 * radius * radius;
    }
};

class Traingle : public Shape
{
public:
    float b;
    float h;
    virtual double getArea()
    {

        return 1 / 2 * b * h;
    }
};
int main()
{
    Circle circle;
    circle.radius = 10;
    double area = circle.getArea();
    cout << "The area of the circle is " << area << " square units " << endl;

    return 0;
}
