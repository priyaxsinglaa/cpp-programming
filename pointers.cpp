#include<iostream>
using namespace std;

// int main()
// {
//     int five=5;
//     cout<<"address of five: "<<&five<<endl;
//     //Address in hexadecimal//
//     int *ptr=&five;
    
//     cout<<"address of ptr: "<<&ptr<<endl;
//     cout<<"address at ptr: "<<ptr<<endl;
//     cout<<"value at ptr: "<<*ptr<<endl;

//     cout<<"size of variable five: "<<sizeof(five)<<endl;
//     cout<<"size of pointer ptr: "<<sizeof(ptr)<<endl;



//     int four=4;
//     int *ptr2=0;
//     ptr2=&four;
//     cout<<"value at four: "<<*ptr2<<endl;
//     (*ptr2)++;
//     cout<<"value at four after ptr2++: "<< *ptr2<<endl;





//     int i=19;
//     int *p=&i;
//     int *pi=p;
//     cout<<p<<"----"<<pi<<endl;
//     cout<<*p<<"----"<<*pi<<endl; 
// return 0;
// }

int main()
{
    int arr[]={1,2,3,4};

    cout<<"address at arr "<<arr<<endl;
    cout<<"address at arr "<<&arr<<endl;
    cout<<"value at arr "<<*arr<<endl;
    cout<<"value at arr "<<*arr+10<<endl;
    cout<<"value at arr "<<*(arr+2)<<endl;

    int i=3;
    cout<< i[arr]<<endl;
    
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(*arr)<<endl;
    cout<<sizeof(&arr)<<endl;  // -----output: 8-----



    *arr=*arr+1;
    cout<<*arr<<endl;


    char chararrr[]="abcde";
    cout<<chararrr<<endl;


    char *ch= &chararrr[0];
    cout<<*ch<<endl;
    cout<<ch<<endl;



    char cha= 'f';
    char *word=&cha;
    cout<<word<<endl;


    // int j=12;
    // int *ji=12;   not possible gives error
    char s[]= "hello";
    char *p = s;
    cout << s[0] << " " << p[0];

}