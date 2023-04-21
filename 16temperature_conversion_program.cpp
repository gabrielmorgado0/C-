#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "***** conversor de temperatura *****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celcius\n";
    std::cout << "What unit you would like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "The temperature is " << temp << "F°\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "The temperature is " << temp << "C°\n";
    }
    else
    {
        std::cout << "Please enter in only C or F\n";
    }

    std::cout << "******************\n";

    return 0;
}