#include<iostream>
using namespace std;
bool sorting(int *arr,int s,int e)
{
    
    while(s<=e)
    {
        if(arr[s]<=arr[s+1])
            {
                s++;
            } 

        else{
            return false;
        }    
    }
    return true;
    
}
int main()
{
    int arr[] = {3, 3 , 5 ,9, 7};
    
    bool result = sorting(arr,0,5);
    cout<<result;

}