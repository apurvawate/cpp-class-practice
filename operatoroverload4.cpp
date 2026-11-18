//operator overloading basics
//unary operator negation (-)
#include<iostream>
using namespace std;
class ABC
{
    int a;
    int b;
    public:
    void add(int x, int y)
    {
        a=x;
        b=y;
        cout<<a+b<<endl;
    }
    void operator-()
    {
        a=-a;
        b=-b;
        cout<<a+b;
    }
};
int main()
{
    ABC abc;
    abc.add(2,3);
    -abc;
}
