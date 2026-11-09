#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address stored in pointer: " << ptr << endl;
    cout << "Value stored at pointer: " << *ptr << endl;

    return 0;
}