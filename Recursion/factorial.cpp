#include<iostream>
using namespace std;
int fact(int n)
{
    int s=0;
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
      return fact(n-1)*n;
    }
    return s;
}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Factorial is "<<fact(n);
    return 0;
}