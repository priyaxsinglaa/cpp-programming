#include<iostream>
using namespace std;
#include<vector>
// bool ispresent(int arr1[][3],int element,int row,int col)
// {
//     for(int row=0;row<3;row++)
//     {
//         for(int col=0;col<3;col++)
//         {
//             if (arr[row][col]==element)
//             {
//                 return 1;
//             }        
//         }
       
//     }
//     return 0;
// }
// void Elementsum(int arr[3][3] ,int row ,int col )
// {   
//     int sum=0;
//     for(int row=0;row<3;row++)
//     {
//         for(int col=0;col<3;col++)
//         {
//            sum+= arr[col][row];     
//         }
//         cout<<sum<<" ";
//         sum=0;
//     }
// }
// int findmaxsum(int arr[][3],int row , int col)
// {
//     int maxi=INT_MIN;
//     int maxindex=-1;
     
//     for(int row=0;row<3;row++)
//     {   
//         int sum=0;
//         for(int col=0;col<3;col++)
//         {
//            sum+= arr[row][col];     
//         }
//         // cout<<sum<<" ";
        
//         if(sum>maxi)
//         {
//             maxi=sum;
//             maxindex=row;
//         }

//     }
//     return maxindex;

// }
// int main()
// {


//     // int arr[3][3]={1,2,3,4,5,6,7,8,9};   it store the values row wise   // 1 2 3
//                                                                            // 4 5 6
//                                                                            // 7 8 9
//     // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};             // 1 11 111 1111  
//                                                                                     // 2 22 222 2222
//                                                                                     // 3 33 333 3333
//     int arr[3][3];
//     for(int row=0;row<3;row++)
//     {
//         for(int col=0;col<3;col++)
//         {
//             cin>>arr[row][col];        
//             }
//     }
    // for(int row=0;row<3;row++)
    // {
    //     for(int col=0;col<3;col++)
    //     {
    //         cout<<arr[row][col]<<" ";        
    //     }
    //     cout<<endl;
    // }
    // int element;
    // cout<<"Enter the element to found:";
    // cin>>element <<endl;
    // if(ispresent(int arr,element,3,3))
    // {
    //     cout<<"Element is found";
    // }
    // else
    // cout<<"Element not found";


    // Elementsum(arr,3,3);
    // cout<<"Max sum at row:"<<findmaxsum(arr,3,3);
// return 0;
// }


// vector<int> wavePrint(vector<vector<int>> arr,int nRows,int mCol )
// {
//     vector<int > ans;
//     for(int col=0;col<mCol;col++)
//     {
//         if(col&1)
//         {
//             for(int row=nRows-1;row>=0;row--)
//             {
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         else{
//             for(int row=0;row<nRows;row++)
//             {
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector <int> arr;
//     for(int i=0;i<9;i++)
//     {
//        for(int j=0;j<3;j++)
//        {
//         cin>>arr[i][j];
//        }
//     }
//     wavePrint(arr);
// }


// int main()
// {
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int row = 3;
//     int col = 3;
//     int count = 0;
//     int total = row*col;
//     int startingRow = 0;
//     int startingCol = 0;
//     int endingRow = row-1;
//     int endingCol = col-1;

//     while(count<total)
//     {
//         //printing first row
//         for(int index=startingCol;count<total && index<=endingCol;index++)
//         {
//             cout<<arr[startingRow][index]<<" ";
//             count++;
//         }
//         startingRow++;
        
//         //printing last col
//         for(int index=startingRow;count<total && index<=endingRow;index++)
//         {
//             cout<<arr[index][endingCol]<<" ";
//             count++;
//         }
//         endingCol--;
        
        
//         // printing last row
//         for(int index=endingCol;count<total && index>=startingCol;index--)
//         {
//             cout<<arr[endingRow][index]<<" ";
//             count++;
//         }
//         endingRow--;
        
        
//         //printing last col
//         for(int index=endingRow;count<total && index>=startingRow;index--)
//         {
//             cout<<arr[index][startingCol]<<" ";
//             count++;
//         }
//         startingCol++;
      

//     }
// }



// void wavePrint(int arr[][2],int nRows,int mCol )
// {
//     // int ans[2][2];
//     for(int col=0;col<mCol;col++)
//     {
//         if(col&1)
//         {
//             for(int row=nRows-1;row>=0;row--)
//             {
//                 cout<<arr[row][col]<<" ";
//             }
//         }
//         else{
//             for(int row=0;row<nRows;row++)
//             {
//                 cout<<arr[row][col]<<" ";
//             }
//         }
//     }

// }
// int main()
// {
//     int arr[2][2];
//     for(int i=0;i<2;i++)
//     {
//        for(int j=0;j<2;j++)
//        {
//         cin>>arr[i][j];
//        }
//     }
//     wavePrint(arr,2,2);
// }

// void rotatebyninety(int arr[][3],int i,int j)
// {
//     for(int row=0;row<i;row++)
//     {
//         for(int col=row;col<j;col++ )
//         {
//             swap(arr[row][col],arr[col][row]);
//         }
//     }
// }


// int main()
// {
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};


//     rotatebyninety(arr,3,3);


//      for(int row=0;row<3;row++)
//     {
//         for(int col=row;col<3;col++ )
//         {
//             cout<<arr[row][col]<<" ";
//         }
//     }
// }
