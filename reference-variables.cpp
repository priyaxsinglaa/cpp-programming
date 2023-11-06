#include<iostream>
using namespace std;

// int& func(int a)
// {
//     // int n=a++;
//     a++;
//     int &sum=a;
//     return sum;
// }

// int *fun(int n)
// {
//     int *ptr=&n;
//     return *ptr;
// }
// void update2(int &n)
// {
//     n++;
// }
// void update(int n)
// {
//     n++;
// }

// int main()
// {
//     int i=4;
//     int &j=i;
    // cout<<"i: "<<i<<endl;
    // cout<<"j: "<<i<<endl;
    // i++;
    // cout<<"i: "<<i<<endl;
    // cout<<"j: "<<j<<endl;
    // j++;
    // cout<<"i: "<<i<<endl;
    // cout<<"j: "<<j<<endl;



    // update2(i);
    // cout<<"i: "<<i<<endl;

    // func(i);
    // cout <<"i: "<<i<<endl;
    
// return 0;
// }




// int main()
// {
//     char ch='s';
//     cout<<sizeof(ch)<<endl;

//     char *cha= new char;
//     cout<<sizeof(cha)<<endl;
// }

// int getsum(int *arr,int n)
// {
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
        
//         sum+=arr[i];
//     }
//     return sum;
    
// }


// int main()
// {
//     int n;
//     cin>>n;
//     int *arr= new int[n];


//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }


//     int ans = getsum(arr,n);
//     cout<<"ans: "<<ans<<endl;
// }



int main()
{
    int n;
    cin>>n;
    
    int col;
    int row;
    cin>>row>>col;
    int **arr =new int *[n];
    int **arr =new int *[row];
    for(int i=0;i<row;i++)
    {
       arr[i]= new int[n];
       arr[i]= new int[col];
    }


    //for input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    //for output
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    for (int i=0;i<n;i++)
    {
        delete [] arr[i];
    }

    delete []arr;
}