//example of function overriding under runtime polymoprhism 
#include<iostream>
using namespace std;
class ABC
{
    public:
    void change(int a,int b)
    {
        cout<<a+b<<endl;
    }

};
 class PQR: public ABC //inheritance
 {
    void change(int a, int b)
    {cout<<a*b<<endl;}
 };
 int main()
 {
    PQR abc;
    abc.change(3,5); //void change in pqr will  run and void chnage in abc will get override
    abc.ABC::change(3,5); //void change in abc will get called
    return 0;
 }