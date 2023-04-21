#include <iostream>

int main()
{
    int temp;

    std::cout << "Enter to temperature: ";
    std::cin >> temp;
     //&&=os 2 tem q ser verdadeiro  ||= ou  != transforma um true num false e vice versa
    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!";

    }
    else{
        std::cout << "The temperature is bad";
    }

    return 0;
}