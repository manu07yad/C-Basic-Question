#include<iostream>
using namespace std;
int maxi(int a,int b)
{
    if(a>b)
    {
    return a;
    }
    else 
    {
    return b;
    }
}
int max_subarray(int arr[], int n, int k)
{
    int i=0,j=0;
     int sum=0;
     int max=0;
     while(j<n)
     { 
         sum= sum+arr[j];
         if(j-i+1<k)
         {
             j++;
         }
         else if(j-i+1==k)
         {
             max= maxi(max,sum);
             sum=sum-arr[i];
             i++;
             j++;
         }
     }
     return max;
}
int main()
{
    int n=10;
    int arr[10]={2,3,4,3,6,5,8,4,20,10};
    int k=3;
     int maximum= max_subarray(arr, n ,k);
     cout<<maximum;
     return 0;
}

