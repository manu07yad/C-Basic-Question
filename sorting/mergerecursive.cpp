#include<iostream>
using namespace std;

void Merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        {
            B[k++]=A[i++];
        }
        else
        {
            B[k++]=A[j++];
        }
    }
    
    for ( ; i<=mid; i++)
    {
        B[k++]=A[i];
    }
    for ( ; j<=h; j++)
    {
        B[k++]=A[j];
    }
    for(i=l;i<=h;i++)
    {
        A[i]= B[i];
    }
}
void MergeSort(int A[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
        
    }
}
int main()
 {
     int A[]={5,7,2,4,9,45,23,67,26,56};
     int n=10;
     MergeSort(A,0,9);

     for(int i=0;i<n;i++)
     {
         cout<<A[i]<<" ";
     }
     cout<<endl;
     return 0;

 }