#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>100)
    {
        return (n-10);
     }
     else
     {
         fun(fun(n+11));
     }
}
 int main()
 {
     int t,r;
     cout<<"Enter the number:";
     cin>>t;
     r=fun(t);
     cout<<r<<endl;
     return 0;
 }
