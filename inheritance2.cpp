#include <bits/stdc++.h>
using namespace std;

class Base
{
protected:
    int m_value;
 
public:
    Base(int value)
        : m_value(value)
    {
    }
 
    const char* getName() { return "Base"; }
    int getValue() { return m_value; }
};
 
class Derived: public Base
{
public:
    Derived(int value)
        : Base(value)
    {
    }
 
    const char* getName() { return "Derived"; }
    int getValueDoubled() { return m_value * 2; }
};

int main()
{
    Derived derived(5);
 
    Base &rBase = derived;
    Base *pBase = &derived;
 
    std::cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';
    std::cout << "rBase is a " << rBase.getName() << " and has value " << rBase.getValue() << '\n';
    std::cout << "pBase is a " << pBase->getName() << " and has value " << pBase->getValue() << '\n';
 
    return 0;
}