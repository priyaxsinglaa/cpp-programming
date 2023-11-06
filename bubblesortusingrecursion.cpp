#include<iostream>
using namespace std;


void bubblesorting(int *arr,int n)
{
    if(n==1 || n==0)
    return ;


    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        
    }



    bubblesorting(arr,n-1);
}

int main()
{
    int arr[] = {71,2,3,4,54,6};

    bubblesorting(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }


return 0;
}