#include <iostream>

int main()
{

    std::string name;

    while (name.empty())//se essa condição for verdadeira vai continuar a mostrar infinitamente, ate q seja falsa
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    return 0;
}