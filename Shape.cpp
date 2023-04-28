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

double Shapes::calculateArea() {}
double Shapes::calculatePerimeter() {}

void Shapes::giveArea()
{
    std::cout << "Area: " << area << std::endl;
}
void Shapes::givePerimeter()
{
    std::cout << "Perimeter: " << perimeter << std::endl;
}

/*
Child Classes
*/
double Square::calculateArea()
{
    area = base * base;
};

double Square::calculatePerimeter()
{
    perimeter = 4 * base;
};

double Rectangle::calculateArea()
{
    area = base * height;
};

double Rectangle::calculatePerimeter()
{
    perimeter = 2 * (base + height);
};

double Triangle::calculateArea()
{
    area = 0.5 * base * height;
};

double Triangle::calculatePerimeter()
{
    perimeter = base + height + sqrt(base * base + height * height);
};

double Circle::calculateArea()
{
    area = 3.14 * base * base;
};

double Circle::calculatePerimeter()
{
    perimeter = 2 * 3.14 * base;
};



