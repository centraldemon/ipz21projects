#pragma once

struct TestObject
{
    TestObject(char charElement, int intElement, float floatElement, double doubleElement) :
        m_charElement(charElement),
        m_intElement(intElement),
        m_floatElement(floatElement),
        m_doubleElement(doubleElement)
    {};
    char m_charElement;
    int m_intElement;
    float m_floatElement;
    double m_doubleElement;
};