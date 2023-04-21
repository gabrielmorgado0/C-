#include <iostream>

int main()
{

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It's January";
        break;
    case 2:
        std::cout << "It's Fevereiro";
        break;
    case 3:
        std::cout << "It's Março";
        break;
    case 4:
        std::cout << "It's Abril";
        break;
    case 5:
        std::cout << "It's Maio";
        break;
    case 6:
        std::cout << "It's Junho";
        break;
    case 7:
        std::cout << "It's Julho";
        break;
    case 8:
        std::cout << "It's Agosto";
        break;
    case 9:
        std::cout << "It's Setembro";
        break;
    case 10:
        std::cout << "It's Outubro";
        break;
    case 11:
        std::cout << "It's Novembro";
        break;
    case 12:
        std::cout << "It's Dezembro";
        break;
        default://como se fosse um else
        std::cout << "Digite apenas numeros de (1-12) ";
        break;
    }

    return 0;
}