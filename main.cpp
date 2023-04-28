#include <iostream>
#include "Shape.h"

int main()
{
    int choice;
    Shapes *shape = nullptr;

    do
    {
        bool validChoice = false;
        while(!validChoice)
        {
            std::cout << "********************" << std::endl;
            std::cout << "Shapes Calculator" << std::endl;
            std::cout << "\n********************" << std::endl;

            std::cout << "1. Square" << std::endl;
            std::cout << "2. Rectangle" << std::endl;
            std::cout << "3. Triangle" << std::endl;
            std::cout << "4. Circle" << std::endl;
            std::cout << "5. Exit" << std::endl;

            std::cout << "Choice: ";
            std::cin >> choice;

            if (choice >= 1 && choice <= 5)
            {
                validChoice = true;
            }
            else
            {
                std::cout << "Invalid choice. Please try again." << std::endl;
            }
        }

        switch (choice)
        {
            case 1: // Square
            {
                shape = new Square();

                std::cout << "********************" << std::endl;
                std::cout << "Square Calculator" << std::endl;
                std::cout << "\n********************" << std::endl;

                //TODO: Display Square

                validChoice = false;
                while (!validChoice)
                {
                    std::cout << "1. Calculate Area" << std::endl;
                    std::cout << "2. Calculate Perimeter" << std::endl;
                    std::cout << "3. Back to Main Menu" << std::endl;
                    std::cout << "Choice(cm): ";
                    std::cin >> choice;

                    if (choice >= 1 && choice <= 3)
                    {
                        shape->getData('s');
                        validChoice = true;
                    }
                    else
                    {
                        std::cout << "Invalid choice. Please try again." << std::endl;
                    }
                }

                switch (choice)
                {
                    case 1:
                    {
                        std::cout << "Area: " << shape->calculateArea() << "^2 cm" << std::endl;
                        break;
                    }
                    case 2:
                    {
                        std::cout << "Perimeter: " << shape->calculatePerimeter() << " cm" << std::endl;
                        break;
                    }
                    case 3:
                    {
                        break;
                    }
                }

                delete shape;
                break;
            }
            case 2: // Rectangle
            {
                shape = new Rectangle();

                std::cout << "********************" << std::endl;
                std::cout << "Rectangle Calculator" << std::endl;
                std::cout << "\n********************" << std::endl;

                //TODO: Display Rectangle

                validChoice = false;
                while (!validChoice)
                {
                    std::cout << "1. Calculate Area" << std::endl;
                    std::cout << "2. Calculate Perimeter" << std::endl;
                    std::cout << "3. Back to Main Menu" << std::endl;
                    std::cout << "Choice(cm): ";
                    std::cin >> choice;

                    if (choice >= 1 && choice <= 3)
                    {
                        shape->getData('r');
                        validChoice = true;
                    }
                    else
                    {
                        std::cout << "Invalid choice. Please try again." << std::endl;
                    }

                    switch (choice)
                    {
                        case 1:
                        {
                            std::cout << "Area " << shape->calculateArea() << std::endl;
                            break;
                        }
                        case 2:
                        {
                            std::cout << "Perimeter: " << shape->calculatePerimeter() << " cm" << std::endl;
                            break;
                        }
                        case 3:
                        {
                            break;
                        }
                    }
                }
                delete shape;
                break;
            }
            case 3: // Triangle
            {
                shape = new Triangle();

                std::cout << "********************" << std::endl;
                std::cout << "Triangle Calculator" << std::endl;
                std::cout << "\n********************" << std::endl;

                //TODO: Display Triangle

                validChoice = false;
                while (!validChoice)
                {
                    std::cout << "1. Calculate Area" << std::endl;
                    std::cout << "2. Calculate Perimeter" << std::endl;
                    std::cout << "3. Back to Main Menu" << std::endl;
                    std::cout << "Choice(cm): ";
                    std::cin >> choice;

                    if (choice >= 1 && choice <= 3)
                    {
                        shape->getData('t');
                        validChoice = true;
                    }
                    else
                    {
                        std::cout << "Invalid choice. Please try again." << std::endl;
                    }

                    switch (choice)
                    {
                        case 1:
                        {
                            std::cout << "Area " << shape->calculateArea() << std::endl;
                            break;
                        }
                        case 2:
                        {
                            std::cout << "Perimeter: " << shape->calculatePerimeter() << " cm" << std::endl;
                            break;
                        }
                        case 3:
                        {
                            break;
                        }
                    }
                }
                delete shape;
                break;
            }
            case 4: // Circle
            {
                shape = new Circle();

                std::cout << "********************" << std::endl;
                std::cout << "Circle Calculator" << std::endl;
                std::cout << "\n********************" << std::endl;

                //TODO: Display Circle

                validChoice = false;
                while (!validChoice)
                {
                    std::cout << "1. Calculate Area" << std::endl;
                    std::cout << "2. Calculate Perimeter" << std::endl;
                    std::cout << "3. Back to Main Menu" << std::endl;
                    std::cout << "Choice(cm): ";
                    std::cin >> choice;

                    if (choice >= 1 && choice <= 3)
                    {
                        shape->getData('c');
                        validChoice = true;
                    }
                    else
                    {
                        std::cout << "Invalid choice. Please try again." << std::endl;
                    }

                    switch (choice)
                    {
                        case 1:
                        {
                            std::cout << "Area " << shape->calculateArea() << std::endl;
                            break;
                        }
                        case 2:
                        {
                            std::cout << "Perimeter: " << shape->calculatePerimeter() << " cm" << std::endl;
                            break;
                        }
                        case 3:
                        {
                            break;
                        }
                    }
                }
                delete shape;
                break;
            }
        }

    } while (choice != 5);

}