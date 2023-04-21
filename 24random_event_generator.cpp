#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch(randNum){
        
        case 1: std::cout <<  "Voce ganhou um adesivo\n";
        break;
        case 2:std::cout <<  "Voce ganhou uma bota\n";
        break;
        case 3:std::cout <<  "Voce ganhou uma blusa\n";
        break;
        case 4:std::cout <<  "Voce ganhou 100reais\n";
        break;
        case 5:std::cout <<  "Voce ganhou 1k de reais\n";
        break;

    }

    return 0;
}