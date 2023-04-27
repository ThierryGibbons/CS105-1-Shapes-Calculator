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
            {}
            case 2: // Rectangle
            {}
            case 3: // Triangle
            {}
            case 4: // Circle
            {}
        }

    } while (choice != 5);

}