#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <cmath>

class Shapes
{
protected:
    double base, height, area, perimeter;

public:
    Shapes();
    void getData(char shape);
    virtual double calculateArea() {}
    virtual double calculatePerimeter() {}
    void giveArea() {}
    void givePerimeter() {}
};

/*
Child Classes
*/
class Square : public Shapes
{
public:
    double calculateArea() override;
    double calculatePerimeter() override;
};

class Rectangle : public Shapes
{
public:
    double calculateArea() override;
    double calculatePerimeter() override;
};

class Triangle : public Shapes
{
public:
    double calculateArea() override;
    double calculatePerimeter() override;
};

class Circle : public Shapes
{
public:
    double calculateArea() override;
    double calculatePerimeter() override;
};

#endif