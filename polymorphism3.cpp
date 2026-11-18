//area of square and rectanlge using funxn ovwerloading polymorphism
#include<iostream>
using namespace std;
class ABC
{
    public:
    void area(int a)
    {
        cout<<"area of squrae"<<a*a<<endl;
    }
    void area(int a,int b)
    {
        cout<<"area of rectangle"<<a*b<< endl;
    }
    void area(int r)
    {
        cout<<"area of a circle"<<3.14*r*r;
    }
};
int main()
{
    ABC abc;
    abc.area(2);//isme kaunsa funxn call hoga?
    abc.area(4,6);
    return 0;

}