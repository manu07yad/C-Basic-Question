#include<iostream>
using namespace std;

int findmax(int A[],int n)
{
     int max=0;
     for(int i=0;i<n;i++)
     {
         if(A[i]>max)
         {
             max=A[i];
         }
     }
     return max;
}
void countsort(int A[],int n)
{
    int max;
    int *c;
    max=findmax(A,n);
    c= new int[max+1];
    for(int i=0;i<max;i++)
        c[i]=0;

        for(int i=0;i<n;i++)
        {
            c[A[i]]++;
        }
        int i=0 , j=0;
        while(i<max+1)
        {
            if(c[i]>0)
            {
                A[j++]=i;
                c[i]--;
            }
            else
            {
                i++;
            }
        }
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    countsort(A,n);
    for(int i=0;i<n;i++)
     {
         cout<<A[i]<<" ";
     }
     cout<<endl;
     return 0;

}