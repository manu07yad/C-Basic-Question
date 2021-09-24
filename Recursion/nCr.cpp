#include<iostream>
using namespace std;
int fact(int x)
{
    int s=0;
    if(x==0)
    {
        return 1;
    }
    if(x==1)
    {
        return 1;
    }
    else
    {
      return fact(x-1)*x;
    }
    return s;
}
int nCr(int n,int r)
{
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return (a/(b*c));

}
int main()
{
    int n,r,s;
    cout<<"Enter the value of n and r: ";
    cin>>n>>r;
     s=nCr(n,r);
    cout<<"nCr is: "<<s<<endl;
    return 0;
}
