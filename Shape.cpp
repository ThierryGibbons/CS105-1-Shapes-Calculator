#include "Shape.h"
#include <iostream>
#include <cmath>

Shapes::Shapes() : base(0), height(0), area(0), perimeter(0) {}
double Shapes::totalArea = 0;

//Get data function
void Shapes::getData(char shape)
{
    switch (shape)
    {
        case 's': // Square
        {
            std::cout << "Enter side(cm): ";
            std::cin >> base;
            break;
        }
        case 'r': // Rectangle
        {
            std::cout << "Enter length and breadth(cm): ";
            std::cin >> base >> height;
            break;
        }
        case 't': // Triangle
        {
            std::cout << "Enter base and height(cm): ";
            std::cin >> base >> height;
            break;
        }
        case 'c': // Circle
        {
            std::cout << "Enter radius(cm): ";
            std::cin >> base;
            break;
        }
    }
}

/*
Child Classes
*/
double Square::calculateArea()  //  Square
{
    return area = base * base;
};
double Square::calculatePerimeter()
{
    return perimeter = 4 * base;
};
void Square::drawShape()
{
    int sizeX = 5;
    for (int i = 0; i < sizeX; i++) {
        for (int j = 0; j < sizeX; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
};

double Rectangle::calculateArea()   // Rectangle
{
    return area = base * height;
};
double Rectangle::calculatePerimeter()
{
    return perimeter = 2 * (base + height);
};
void Rectangle::drawShape()
{
    int sizeX = 15;
    int sizeY = 5;
    for (int i = 0; i < sizeY; i++) {
        for (int j = 0; j < sizeX; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
};

double Triangle::calculateArea()    // Triangle
{
    return area = 0.5 * base * height;
};
double Triangle::calculatePerimeter()
{
    return perimeter = base + height + sqrt(base * base + height * height);
};
void Triangle::drawShape()
{
    int sizeX = 5;
    for (int i = 0; i < sizeX; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
};

double Circle::calculateArea()  // Circle
{
    return area = 3.14 * base * base;
};
double Circle::calculatePerimeter()
{
    return perimeter = 2 * 3.14 * base;
};
void Circle::drawShape()
{
    int sizeX = 5;

    for (int i = -sizeX; i <= sizeX; i++) {
        for (int j = -sizeX; j <= sizeX; j++) {
            if (i*i + j*j <= sizeX*sizeX + 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
};



