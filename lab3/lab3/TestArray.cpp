#include "TestArray.h"
#include <algorithm>

TestArray::TestArray(const std::vector<TestObject>& elements)
{
    m_elements = elements;
}

void TestArray::AddObject(const TestObject & object)
{
    m_elements.push_back(object);
}

void TestArray::operator>(char element)
{
    std::sort(m_elements.begin(), m_elements.end(), 
        [&](const TestObject& first, const TestObject& second)
        {
            return first.m_charElement > second.m_charElement;
        }
    );
}

void TestArray::operator>(int element)
{
    std::sort(m_elements.begin(), m_elements.end(),
        [&](const TestObject& first, const TestObject& second)
    {
        return first.m_intElement > second.m_intElement;
    }
    );
}

void TestArray::operator>(float element)
{
    std::sort(m_elements.begin(), m_elements.end(),
        [&](const TestObject& first, const TestObject& second)
    {
        return first.m_floatElement > second.m_floatElement;
    }
    );
}

void TestArray::operator>(double element)
{
    std::sort(m_elements.begin(), m_elements.end(),
        [&](const TestObject& first, const TestObject& second)
    {
        return first.m_doubleElement > second.m_doubleElement;
    }
    );
}

void TestArray::operator<(char element)
{
    std::sort(m_elements.begin(), m_elements.end(),
        [&](const TestObject& first, const TestObject& second)
    {
        return first.m_charElement < second.m_charElement;
    }
    );
}

void TestArray::operator<(int element)
{
    std::sort(m_elements.begin(), m_elements.end(),
        [&](const TestObject& first, const TestObject& second)
    {
        return first.m_intElement < second.m_intElement;
    }
    );
}

void TestArray::operator<(float element)
{
    std::sort(m_elements.begin(), m_elements.end(),
        [&](const TestObject& first, const TestObject& second)
    {
        return first.m_floatElement < second.m_floatElement;
    }
    );
}

void TestArray::operator<(double element)
{
    std::sort(m_elements.begin(), m_elements.end(),
        [&](const TestObject& first, const TestObject& second)
    {
        return first.m_doubleElement < second.m_doubleElement;
    }
    );
}

const std::vector<TestObject> TestArray::Elements() const
{
    return m_elements;
}
