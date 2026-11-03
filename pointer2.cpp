//pointer arithmatic
#include<iostream>
using namespace std;
int main()
{
    int arr[50], *ptr,i,n=5
    for(i=0;i<n;i++)
    {cin>>"enter your array elements">>arr[i];}
    ptr=arr;
    cout<<"address of 1st element"<<ptr;
    cout<<ptr++;
    cout<<ptr--
    cout<<ptr+2;
    cout<<*ptr;
}