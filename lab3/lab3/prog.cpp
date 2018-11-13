#include <iostream>
#include "TestArray.h"


void main()
{
    std::vector<TestObject> objects;
    objects.push_back(TestObject
    {
        'c',
         3,
         2.5,
         (double)5.7
    });
    objects.push_back(TestObject
    {
        'a',
        18,
        3.8,
        (double)14.2
    });
    objects.push_back(TestObject
    {
        'j',
        1,
        42.35,
        (double)1
    });
    objects.push_back(TestObject
    {
        'k',
        9,
        (float)9,
        (double)23.79
    });
    TestArray testArray(objects);
    std::cout << "Lower for char" << std::endl;
    testArray < '3';
    for (const auto& element : testArray.Elements())
    {
        std::cout << element.m_charElement << " - ";
    }
    std::cout << std::endl;

    std::cout << "Lower for int" << std::endl;
    testArray < 3;
    for (const auto& element : testArray.Elements())
    {
        std::cout << element.m_intElement << " - ";
    }
    std::cout << std::endl;

    std::cout << "Lower for float" << std::endl;
    testArray < (float)3;
    for (const auto& element : testArray.Elements())
    {
        std::cout << element.m_floatElement << " - ";
    }
    std::cout << std::endl;

    std::cout << "Lower for double" << std::endl;
    testArray < (double)3;
    for (const auto& element : testArray.Elements())
    {
        std::cout << element.m_doubleElement << " - ";
    }
    std::cout << std::endl;

    std::cout << "Higher for char" << std::endl;
    testArray > '3';
    for (const auto& element : testArray.Elements())
    {
        std::cout << element.m_charElement << " - ";
    }
    std::cout << std::endl;

    std::cout << "Higher for int" << std::endl;
    testArray > 3;
    for (const auto& element : testArray.Elements())
    {
        std::cout << element.m_intElement << " - ";
    }
    std::cout << std::endl;

    std::cout << "Higher for float" << std::endl;
    testArray > (float)3;
    for (const auto& element : testArray.Elements())
    {
        std::cout << element.m_floatElement << " - ";
    }
    std::cout << std::endl;

    std::cout << "Higher for double" << std::endl;
    testArray > (double)3;
    for (const auto& element : testArray.Elements())
    {
        std::cout << element.m_doubleElement << " - ";
    }
    std::cout << std::endl;
    system("pause");
}