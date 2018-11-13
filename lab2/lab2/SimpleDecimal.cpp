#include "SimpleDecimal.h"
#include <exception>

SimpleDecimal::SimpleDecimal(int value)
{
    for (int i = 2; i <= sqrt(value); ++i)
    {
        if (value % i == 0)
        {
            throw std::exception("Not a simple decimal");
        }
    }
    m_value = value;
}

int SimpleDecimal::operator+(const SimpleDecimal & other) const
{
    return this->m_value + other.m_value;
}

int SimpleDecimal::operator-(const SimpleDecimal & other) const
{
    return this->m_value - other.m_value;
}

int SimpleDecimal::operator*(const SimpleDecimal & other) const
{
    return this->m_value * other.m_value;
}

int SimpleDecimal::operator/(const SimpleDecimal & other) const
{
    return this->m_value / other.m_value;
}

void SimpleDecimal::operator=(const SimpleDecimal & other)
{
    this->m_value = other.m_value;
}

void SimpleDecimal::operator=(const int & value)
{
    for (int i = 2; i <= sqrt(value); ++i)
    {
        if (value % i == 0)
        {
            throw std::exception("Not a simple decimal");
        }
    }
    this->m_value = value;
}

SimpleDecimal::operator int() const
{
    return m_value;
}
