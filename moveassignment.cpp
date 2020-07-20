#include <iostream>
using namespace std;

class A {
    public:
    int a;
    A& operator= (A&& otro) 
    {
        this->a = otro.a;
        otro.a = 0;
        return *this;
    }
};

int main()
{
    A a;
    a.a = 1;
    A b;
    b = std::move(a); //llamando A& operator= (A&& otro)
    std::cout << a.a << std::endl; //0
    std::cout << b.a << std::endl; //1

}

