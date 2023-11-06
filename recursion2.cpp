#include<iostream>
using namespace std;
// bool isSorted(int arr[] , int size)
// {
//     if(size == 1 || size == 0)
//     return true;

//     if(arr[0] > arr[1])
//     return false;

//     else{
//         bool remainingPart = isSorted(arr+1 , size-1 );
//         return remainingPart;
//     }
// }


// int getSum(int arr[] , int size)
// {
//     int sum = 0;
//     if(size == 0)
//     return 0;

//     if(size == 1)
//     {
//         return arr[0];
//     }
//     else{
//         sum = arr[0] + getSum(arr+1 , size-1);
//         return sum;
//     }
// }
// int main()
// {
//     int arr[] = {1,2,5,4,12};
//     int size = 5;
     
    // bool ans = isSorted(arr,size);
    
    // if(ans)
    // {
    //     cout<<"Array Is Sorted:";
    // }
    // else
    // cout<<"NOT SORTED";



    // int ans = getSum(arr,size);
    // cout<<ans;
// return 0;
// }

// bool searchingSorting(int *arr , int start , int end , int key)
// {
//     //base case

//     if(start > end)
//     return false;
     
//     int mid = (start + end) / 2;

//     if (arr[mid] == key)
//     return true;

//     if(arr[mid]  < key)
//     {
//         return searchingSorting(arr, mid+1 , end , key);

//     }

//     else
//     {
//         return searchingSorting(arr , start , mid-1 , key);
//     }
        
    
// }

// int main()
// {
//     int arr[] = {1,2,3,4};
//     int size = 4;
//     int key = 7;

//     bool ans = searchingSorting(arr, 0 , size , key);

//     if(ans)
//     {
//         cout<<"found";
//     }
//     else
//     cout<<"not found";
// }

// void reverseStr(string &string , int i , int j)
// {
//     cout<<"call received: "<<string<<endl;
//     if(i > j)
//     return ; 

//     swap(string[i],string[j]);
//     i++;
//     j--;

//     reverseStr(string , i , j);

// }

// int main()
// {
//     string name = "abcde";

//     reverseStr(name , 0 , name.length()-1);

//     cout<<endl;

//     cout<<name;

// }

// bool checkPalindrome(string &str , int i , int j)
// {
//     if(i>j)
//     return true;

//     if(str[i] != str[j])
//     return false;

    
//     else{
//         return checkPalindrome(str, i+1 , j-1);
//     }
// }
// int main()
// {
//     string name = "helleh";
//     checkPalindrome(name , 0 , name.length()-1);
//     if (checkPalindrome)
//     {
//         cout<<"palindrome";
//     }
//     else
//     cout<<"not palindrome";
// }


int powfunc(int a,int b)
{
    //base case

    if(b==0)
        return 1;

    if(b==1)
        return a;


    int ans = powfunc(a,b/2);
    if(b%2 == 0)
        return ans * ans;

    else
        return a * ans * ans;



}

int main()
{
    int a,b;
    cin>>a>>b;

    int ans = powfunc(a,b);
    cout<<ans<<endl;
}