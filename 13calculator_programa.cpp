#include <iostream>

int main()
{
    char op;
    double number1;
    double number2;
    double result;

    std::cout << "*************CALCULATOR**********'\n'";

    std::cout << "Coloque um entre(+-* /)";
    std::cin >> op;

    std::cout << "Insira o primeiro numero";
    std::cin >> number1;

    std::cout << "Insira o segundo numero";
    std::cin >> number2;

    switch (op)
    {
    case '+':
        result = number1 + number2;
        std::cout << "The result is: " << result << '\n';
        break;

        case '-':
        result = number1 - number2;
        std::cout << "The result is: " << result << '\n';
        break;

        case '*':
        result = number1 * number2;
        std::cout << "The result is: " << result << '\n';
        break;

        case '/':
        result = number1 / number2;
        std::cout << "The result is: " << result << '\n';
        break;

        default:
        std::cout << "Isso nao foi uma resposta valida" << '\n';
        break;
    }

    std::cout << "***********************************";

    return 0;
}