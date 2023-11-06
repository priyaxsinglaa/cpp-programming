// #include<iostream>
// using namespace std;

// int main()
// {
//     int c;
//     cin>>c;
//     cout << "the no is\t" << c << endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             cout<<j;
//             j=j+1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             cout<<j;
//             j=j+1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     for(i=n;i>=1;i--)
//     {
//         for (int j=1;j<=i;j++)
//         {
//             cout<<"*";
            
//         }
//         cout<<endl;
        
//     }
//       for(i=1;i<=n;i++)
//     {
//         for (int j=1;j<=i;j++)
//         {
//             cout<<"*";
            
//         }
//         cout<<endl;
        
//     }
// }
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
    
//     int sum=0;
//     int product =1;
//     int result;
//     while(n>0)
//     {
//         int rem = n % 10;
//         sum = sum + rem;
//         product= product * rem;
//         n= n / 10;
//         result = product - sum;
//     }
//     cout<<result<<endl;
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ans=0;
//     int i=0;
//     while(n!=0)
//     {
//         int bit = n & 1;
        
//         ans = ( bit * pow(10,i) ) + ans;
//         cout<<ans<<endl;
//         n= n>>1;
//         i++;
//     }
//     cout<<ans<<endl;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int count=0;
//     bool prime = 0;
//     for (int i =2; i<n;i++)
//     {
//         if (n%i==0)
//         {
//             prime=1;
//             count+=1;
//             break;

//         }
//     }
//     if(prime==1)
//     {
//         cout<<"it is prime no";
//     }
//     else{cout<<"yes";
//     }
        
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     int b;
//     cin>>b;
//     cout<<a<<b;
  

// }

