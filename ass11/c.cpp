#include <iostream>

class Foo
{
public:
    Foo() {}
    virtual void baz() { std::cout << "Foo::baz()" << std::endl; }
};

class B : public Foo
{
public:
    B() {}
    virtual void baz() { std::cout << "B::baz()" << std::endl; }
    ~B();
};

int main()
{
    Foo *pFoo = new B();
    return 0;
}