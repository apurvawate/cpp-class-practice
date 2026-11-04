//sum of even numbers in an array
#include<iostream>
using namespace std;
int main()
{
    int *ptr,i,n=5,sum=0;
    int arr[50];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ptr=arr;
    for(i=0;i<n;i++)
    {
    if(*ptr%2==0)
    {sum+=*ptr;}
    ptr++;
    }
    cout<<sum;
    return 0;
}