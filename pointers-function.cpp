#include<iostream>
using namespace std;
void print(int *p)
{
    cout<<*p<<endl;
}
void update(int *p)
{
    (*p)++;
    cout<<*p<<endl;
}

int sumcal(int ar[],int n)
{
    cout<<sizeof(ar)<<endl; /*it acts like a pointer*/
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+i[ar];
    }
    return sum;
}
int main()
{
    int i=5;
    int *pointer=&i;
   
    cout<<"before update: ";
    print(pointer);
  
    cout<<"after update: ";
    update(pointer);

    int arr[]={1,2,5,3,4};
    cout<<sumcal(arr,5)<<endl;
    cout<<sumcal(arr+2,3)<<endl;
return 0;
}