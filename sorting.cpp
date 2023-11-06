// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int size , int key);
// int main()
// {
//     int arr[]={1, 2,3, 4, 5};
//     cout<<"binary search of 4: "<<binarysearch(arr,5,4);
// }
// int binarysearch(int arr[],int size , int key)
// {
//     int start=0;
//     int end=size-1;
//     int mid = (start + end) /2;
//     while (start<end)
//     {
//         if (arr[mid]==key)
//         {
//             return mid;
//         }
//         if(key>arr[mid])
//         {
//             return start =mid+1;
//         }
//         else
//         {
//             return end=mid-1;
//         }
//         mid = (start+ end) /2;
//     }
//     return -1;
// }

// #include<iostream>
// using namespace std;
// int firstoccurence(int arr[] , int size , int key);
// int lastoccurrence(int arr[] , int size ,  int key);
// int main()
// {
//     int arr[]={1, 2,2, 2, 5,6};
//     cout<<"binary search of 2: "<<firstoccurence(arr,6,2)<<endl;
//     cout<<"binary search of 2: "<< lastoccurrence(arr,6,2);
// }
// int firstoccurence(int arr[],int size , int key)
// {
//     int start=0;
//     int end=size-1;
//     int mid = (start + end) /2;
//     int ans=-1;
//     while (start<=end)
//     {
//         if (arr[mid]==key)
//         {
//             ans = mid;
//             end = mid-1;
//         }
//         else if(key>arr[mid])
//         {
//             return start =mid+1;
//         }
//         else 
//         {
//             return end=mid-1;
//         }
//         mid = (start+ end) /2;
//     }
//     return ans;
// }
// int lastoccurrence(int arr[] , int size , int key)
// {
//     int start = 0;
//     int end = size-1;
//     int mid = (start + end) /2;
//     int ans = -1;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid+1;
//         }
//         else if(key>arr[mid])
//         {
//             return start = mid+1;
//         }
//         else if(arr[mid]>key)
//         {
//             return end = mid-1;
//         }
//         mid = (start+ end) /2;
//     }
//     return ans;
// }

/*****************************************************top element*******************************************************/

