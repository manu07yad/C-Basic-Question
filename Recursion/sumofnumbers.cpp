#include<iostream>
using namespace std;
int sum(int n)
{
    int s=0;
    if(n==0)
    {
        return 0;
    }
    else
    {
      return sum(n-1)+n;
    }
    return s;
}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Sum is "<<sum(n);
    return 0;

}