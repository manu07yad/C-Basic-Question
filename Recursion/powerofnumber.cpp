#include<iostream>
using namespace std;
int pow(int m,int n)
{
    int s=0;
    if(n==0)
    {
        return 1;
    }
    else
    {
      return pow(m,n-1)*m;
    }
    
}
int main()
{
    int n,m;
    cout<<"Enter the value of m and n:";
    cin>>m>>n;
    cout<<"Power is "<<pow(m,n);
    return 0;
}