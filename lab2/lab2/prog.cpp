#include <iostream>
#include "SimpleDecimal.h"


void main()
{
    try
    {
        SimpleDecimal x(3);
        SimpleDecimal y(5);
        SimpleDecimal z = y - x;
        std::cout << (int)z << std::endl;
        std::cout << x + y << std::endl;
        std::cout << x - y << std::endl;
        std::cout << x * y << std::endl;
        std::cout << x / y << std::endl;
        system("pause");
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl; 
        system("pause");
    }
}