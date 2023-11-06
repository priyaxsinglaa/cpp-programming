#include<iostream>
using namespace std;
// int recursion(int n)
// {
//     //base case
//     if(n==1 || n==0)
//     {
//         return 1;
//     }
//     //recursive relation
//     return ( n * recursion(n-1) );
// }
// int main()
// {
//     int n;
//     int ans=0;
//     cin>>n;
//     ans = recursion(n);
//     cout<<"ans: "<<ans;
// return 0;
// }

// int power(int n)
// {
//     if (n==0)
//     {
//         return 1;
//     }
//     return ( 2 * power(n-1) );
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int ans=0;
//     ans = power(n);
//     cout<<"ans: "<<ans;
// }




// void printingnumber(int n)
// {
//     if (n==0)
//     {
//         return ;
//     }
//     cout<<n<<" ";
//     printingnumber(n-1);
// }
// void printingnumber2(int n)
// {
//     if (n==0)
//     {
//         return ;
//     }
//     printingnumber2(n-1);
//     cout<<n<<" ";
    
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int ans=0;
//     printingnumber(n);
//     cout<<endl;
//     printingnumber2(n);
    
// }

// void reachHome(int src,int dest)
// {
//     cout<<"source: "<<src<<" destination: "<<dest<<endl;

//     if(src==dest)
//     {

//         cout<<"reachedHome";
//         return;
//     }
//     src++;
//     reachHome(src,dest);


// }


// int main()
// {
//     int dest=10;
//     int src=1;

//     reachHome(src,dest);
// }

// int fiboNum(int n)
// {
//     int nthterm = 0;
//     if(n==1)
//     {
//         return 0;
//     }
//     if(n==2)
//     {
//         return 1;
//     }
//     nthterm = fiboNum(n-1)+fiboNum(n-2);
//     return nthterm;
// }


// int main()
// {
//    int n,result;
//    cin>>n;
//    result = fiboNum(n);
//    cout<<"nthterm: "<<result;
// }


// int countDistinctWayToClimbStairs(int nStairs)
// {
//     int nthStairs = 0;
//     if(nStairs<0)
//     {
//         return 0;
//     }
//     if(nStairs==0)
//     {
//         return 1;
//     }
//     nthStairs = countDistinctWayToClimbStairs(nStairs-1)+countDistinctWayToClimbStairs(nStairs-2);
//     return nthStairs;
// }


// int main()
// {
//    int nStairs,result;
//    cin>>nStairs;
//    result = countDistinctWayToClimbStairs(nStairs);
//    cout<<"nthStairs: "<<result;
// }





// void sayDigit(int n, string arr[])
// {
//     int digit;
//     if(n==0)
//     {
//         return;
//     }
//     digit = n % 10;
//     n = n / 10;
//     cout<<arr[digit]<<" ";
//     sayDigit(n,arr);
// }
// int main()
// {
//     string arr[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//     int n;
//     cin>>n;
//     sayDigit(n,arr);
// }



