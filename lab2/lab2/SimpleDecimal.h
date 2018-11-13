#pragma once

class SimpleDecimal
{
public:
    SimpleDecimal(int value);
    int operator+(const SimpleDecimal&) const;
    int operator-(const SimpleDecimal&) const; 
    int operator*(const SimpleDecimal&) const;
    int operator/(const SimpleDecimal&) const;
    void operator= (const SimpleDecimal&);
    void operator=(const int&); 
    explicit operator int() const;
private:
    int m_value;

private:
    SimpleDecimal();
};