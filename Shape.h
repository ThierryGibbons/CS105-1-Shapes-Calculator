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
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
    virtual void drawShape() = 0;
    virtual ~Shapes() {}
    static double totalArea;
};

/*
Child Classes
*/
class Square : public Shapes
{
public:
    double calculateArea() override;
    double calculatePerimeter() override;
    void drawShape() override;
};

class Rectangle : public Shapes
{
public:
    double calculateArea() override;
    double calculatePerimeter() override;
    void drawShape() override;
};

class Triangle : public Shapes
{
public:
    double calculateArea() override;
    double calculatePerimeter() override;
    void drawShape() override;
};

class Circle : public Shapes
{
public:
    double calculateArea() override;
    double calculatePerimeter() override;
    void drawShape() override;
};

#endif