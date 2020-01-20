#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    //std::cout << solution.PrintHelloWorld() << std::endl;
    std::cout << "Name: " << solution.PrintName() << std::endl;
    std::cout << "Major: " << solution.PrintMajor() << std::endl;
    std::cout << "Interest: " << solution.PrintInterest() << std::endl;
    return EXIT_SUCCESS;
}