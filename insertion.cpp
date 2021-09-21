#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"Enter the size of array:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
   {
    cin>>array[i];
   }
   for(int j=1 ; j < n ; j++)
{
     temp = array[j];
     int i = j-1;
    while(i >= 0 && array[i] > temp)
    {
    array[i + 1] = array[i];
     i = i - 1;
     }
     array[i + 1] = temp;
}
    for(int i=0;i<n;i++)
      {
      cout<<array[i]<<" ";
      }
      return 0;
}
