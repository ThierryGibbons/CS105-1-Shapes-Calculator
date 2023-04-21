#include <iostream>
#include <cmath>

using namespace std;

// Parent class
class Shapes {
protected:
    double base, height, result;

public:
    // Constructor
    Shapes() : base(0), height(0), result(0) {}

    // Get data function
    void getData(char shape) {
        switch (shape)
        {
            case 's': // Square
            {
                cout << "Enter side: ";
                cin >> base;
                break;
            }
            case 'r': // Rectangle
            {
                cout << "Enter length and breadth: ";
                cin >> base >> height;
                break;
            }
            case 't': // Triangle
            {
                cout << "Enter base and height: ";
                cin >> base >> height;
                break;
            }
            case 'c': // Circle
            {
                cout << "Enter radius: ";
                cin >> base;
                break;
            }
        }
    }

    // Calculate area function (virtual for function overriding)
    virtual void calculateArea() {}

    // Give result function
    void giveResult() {
        cout << "Area: " << result << endl;
    }
};

// Child class: Square
class Square : public Shapes {
public:
    void calculateArea() override {
        result = base * base;
    }

    void calculatePerimeter() {
        cout << "Perimeter: " << 4 * base << endl;
    }
};

// Child class: Rectangle
class Rectangle : public Shapes {
public:
    void calculateArea() override {
        result = base * height;
    }

    void calculatePerimeter() {
        cout << "Perimeter: " << 2 * (base + height) << endl;
    }
};

// Child class: Triangle
class Triangle : public Shapes {
public:
    void calculateArea() override {
        result = 0.5 * base * height;
    }

    void calculatePerimeter() {
        double side = sqrt(pow(base / 2, 2) + pow(height, 2));
        cout << "Perimeter: " << (2 * side + base) << endl;
    }
};

// Child class: Circle
class Circle : public Shapes {
public:
    void calculateArea() override {
        result = M_PI * pow(base / 2, 2);
    }

    void calculatePerimeter() {
        cout << "Perimeter: " << 2 * M_PI * (base / 2) << endl;
    }
};

int main() {
    int choice;
    Shapes *shape = nullptr;

    cout << "Shapes Calculator Menu:" << endl;
    cout << "1. Square Calculator" << endl;
    cout << "2. Rectangle Calculator" << endl;
    cout << "3. Triangle Calculator" << endl;
    cout << "4. Circle Calculator" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            shape = new Square();
            break;
        case 2:
            shape = new Rectangle();
            break;
        case 3:
            shape = new Triangle();
            break;
        case 4:
            shape = new Circle();
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    shape->getData();
    shape->calculateArea();
    shape->giveResult();

    // Using polymorphism for calculatePerimeter function
    if (Square *s = dynamic_cast<Square *>(shape)) {
        s->calculatePerimeter();
    } else if (Rectangle *r = dynamic_cast<Rectangle *>(shape)) {
        r->calculatePerimeter();
    } else if (Triangle *t = dynamic_cast<Triangle *>(shape)) {
        t->calculatePerimeter();
    } else if (Circle *c = dynamic_cast<Circle *>(shape)) {
        c->calculatePerimeter();
    }

    delete shape;
    return 0;
}