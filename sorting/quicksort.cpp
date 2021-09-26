#include<iostream>
using namespace std;
int partition(int A[], int l,int h)
{
    int pivot=A[l];
    int i=l,j=h;
    do
    {
        do
        {
            i++;
        } while (   A[i]<=pivot);
        do
        {
            j--;
        } while (A[j]>pivot);
        int temp;
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
 } while (i<j);
        int temp1;
        temp1=A[l];
        A[l]=A[j];
        A[j]=temp1;

        return j;
}
void QuickSort(int A[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);

    }

}
int main()
{
    int A[]={23,12,45,78,34,76,48,7,8,26,INT_MAX};
    int n=11;
    QuickSort(A,0, n-1);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
