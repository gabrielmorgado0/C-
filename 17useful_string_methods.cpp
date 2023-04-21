#include <iostream>

int main()
{

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    /*if (name.empty())
    { // pode contar qnts letras tem na string name.length()
        std::cout << "Voce nao digitou seu nome";
        // name.empty() vai ver se a string ta vazia ou nao, se is true or false
    }
    else
    {
        std::cout << "Hello " << name;
    } */

    //name.append("@gmail.com"); //add algo no final da string

   // std::cout << "Your username is now: " << name;
   


    return 0;
}
