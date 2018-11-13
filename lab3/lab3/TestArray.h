#pragma once
#include "TestObject.h"
#include <vector>
class TestArray
{
private:
    std::vector<TestObject> m_elements;
public:
    TestArray() = default;
    TestArray(const std::vector<TestObject>& elements);
    void AddObject(const TestObject& object);
    void operator>(char element);
    void operator>(int element);
    void operator>(float element);
    void operator>(double element);
    void operator<(char element);
    void operator<(int element);
    void operator<(float element);
    void operator<(double element);
    const std::vector<TestObject> Elements() const;
};