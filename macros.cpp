#include<iostream>
using namespace std;
#define PI 3.14
// int main()
// {
//     int r=5;
//     double area = PI * r * r;
//     cout<<"area is: "<<area;
    
// return 0;
// }

// int global_variable=14;
// void a()
// {
//     cout<<"a: "<<global_variable<<endl;
//     global_variable++;
// }
// void b()
// {
//     cout<<"b: "<<global_variable<<endl;
// }
// int main()
// {
//     cout<<"main: "<<global_variable<<endl;
//     a();
//     b();
// }

///////// inline function ////////
// inline int func(int &a,int &b)
// {
//     return ( (a>b) ? a : b );
// }
// int main()
// {
//     int a=4;
//     int b=9;
//     int ans=0;
//     ans=func(a,b);
//     cout<<ans<<endl;
//     a=a+1;
//     b=b-8;
//     ans=func(a,b);
//     cout<<ans<<endl;

// }




/////// arguments //////
// void printingfunc(int arr[] , int end , int start=0)
// {
//     for(int i=start;i<end;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7};

//     printingfunc(arr,7);
//     cout<<endl;
//     printingfunc(arr,7,2);
// }