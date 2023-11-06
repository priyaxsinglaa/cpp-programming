#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {45,56,6,5,1};
    

    for(int i=0;i<4;i++)
    {
        int minIndex = i;
        for(int j=i+1;j<5;j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}