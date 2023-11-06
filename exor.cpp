/**************************************deciaml to binary convertion************************************/
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
//     int n,i;
//     cin >>n;
    
//     int ans=0;int bit=0;
//     while(n!=0)
//     {
//         bit=n&1;
//         ans=(bit* pow(10,i))+ans;
//         n=n>>1;
//         i++;
//     }
//     cout<<"ans is:"<<ans;
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr1[100];
    
//     int n,i;
    
//     cin>>n;
//     while(n!=0)
//     {
//         if(n%2==0)
//         {
//             cout<<0;
            
//         }
//         else{
//             cout<<1;
//         }
//         n=n/2;
//     }
    

// }
// #include<iostream>
// #include<math.h>

// using namespace std;

// int main()
// { 
//     int n;
//     cin>>n;
//     int i=0; 
//     int ans=0;
//     while(n!=0)
//     {
//         int bit = n & 1;
//         if(bit==1)
//         {
//             ans=ans+ pow(2,i);
//            
//         }
//         n=n/10;
//         i++;
//     }
//     cout<<ans;
// return 0;
// }
// #include<iostream>
// using namespace std;

// int main()
// {
//     string name;
//     cin>> name;
//     cout<<name;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int fact(int n);
// int main()
// {
//     int n;
//     cout<<"output a number";
//     cin>>n;
//    int res=fact(n);
//    cout<<res;
// return 0;
// }
// int fact(int n)
// {
//      if(n==1||n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*fact(n-1);
//     }
    
// }