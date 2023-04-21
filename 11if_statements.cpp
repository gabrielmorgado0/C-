#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age :";
    std::cin >> age;

    if (age >= 100)
    {
        std::cout << "You are muito velho cara, nao pode entrar";
    }
    else if (age >= 18)
    {
        std::cout << "Bem vindo ao site";
    }

    else
    {
        std::cout << "Voce nao pode entrar no site ainda";
    }

    return 0;
}