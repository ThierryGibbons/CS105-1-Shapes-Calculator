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
    virtual void calculateArea() {}
    virtual void calculatePerimeter() {}
    void giveArea() {}
    void givePerimeter() {}
};

/*
Child Classes
*/
class Square : public Shapes
{
public:
    void calculateArea() override;
    void calculatePerimeter() override;
};

class Rectangle : public Shapes
{
public:
    void calculateArea() override;
    void calculatePerimeter() override;
};

class Triangle : public Shapes
{
public:
    void calculateArea() override;
    void calculatePerimeter() override;
};

class Circle : public Shapes
{
public:
    void calculateArea() override;
    void calculatePerimeter() override;
};

#endif