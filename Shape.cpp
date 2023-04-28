#include "Shape.h"
#include <iostream>
#include <cmath>

Shapes::Shapes() : base(0), height(0), area(0), perimeter(0) {}

//Get data function
void Shapes::getData(char shape)
{
    switch (shape)
    {
        case 's': // Square
        {
            std::cout << "Enter side: ";
            std::cin >> base;
            break;
        }
        case 'r': // Rectangle
        {
            std::cout << "Enter length and breadth: ";
            std::cin >> base >> height;
            break;
        }
        case 't': // Triangle
        {
            std::cout << "Enter base and height: ";
            std::cin >> base >> height;
            break;
        }
        case 'c': // Circle
        {
            std::cout << "Enter radius: ";
            std::cin >> base;
            break;
        }
    }
}

/*
Child Classes
*/
double Square::calculateArea()
{
    return area = base * base;
};

double Square::calculatePerimeter()
{
    return perimeter = 4 * base;
};

double Rectangle::calculateArea()
{
    return area = base * height;
};

double Rectangle::calculatePerimeter()
{
    return perimeter = 2 * (base + height);
};

double Triangle::calculateArea()
{
    return area = 0.5 * base * height;
};

double Triangle::calculatePerimeter()
{
    return perimeter = base + height + sqrt(base * base + height * height);
};

double Circle::calculateArea()
{
    return area = 3.14 * base * base;
};

double Circle::calculatePerimeter()
{
    return perimeter = 2 * 3.14 * base;
};



