#include <iostream>

int main()
{
     srand(time(NULL));

     //int num = (rand() % 6) +1;
     int num = rand();

     std::cout << num;
    return 0;
}