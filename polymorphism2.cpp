//example of function overloading
#include<iostream>
using namespace std;
class ABC
{
public:
void change(int a, int b)
{
    cout<<a+b<<endl;
}
void change(int a)
{
    cout<<a+a;
}
void change(double a,double b)
{
    cout<<a+b<<endl;
}
};
int main()
{
    ABC abc;
    abc.change(1,3);
    abc.change(1.2,4.5);
    return 0;

}