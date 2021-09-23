#include<iostream>
using namespace std;
int main()
{
    int n,temp,m;
    cout<<"Enter the size of array:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
   {
    cin>>array[i];
   }
   for(int i=0;i<n;i++)
   {

       temp=i;
       for(int j=i+1;j<n;j++)
       {

           if(array[j]<array[temp])
           {

               temp=j;
           }
           m=array[temp];
           array[temp]=array[i];
           array[i]=m;
       }

   }
    for(int i=0;i<n;i++)
      {
      cout<<array[i]<<" ";
      }
      return 0;
}
