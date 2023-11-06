#include<iostream>
using namespace std;
// int getlenght(char name[])
// {
//     int count=0;
//     for(int i=0;name[i]!='\0';i++)
//     {
//         count++;
//     }
//     return count;
// }
// void reverse(char name[],int n)
// {
//     int s=0;
//     int e=n-1;
//     while(s<e)
//     {
//         swap(name[s++],name[e--]);
//     }
// }
// int main()
// {
//     char name[20];
//     cout<<"enter your name"<<endl;
//     cin>>name;
//     cout<<"your name is "<<name<<endl;
//     int len= getlenght(name);
//     cout<<"lenght of string is:"<<len<<endl;
//     reverse(name,len);
//     cout<<"reverse string "<<name;
// return 0;
// }
// char tolowercase(char ch)
// {
//     if(ch>='a'&& ch<='z')
//     {
//         return ch;
//     }
//     else{
//         char tempchar= ch-'A'+'a';
//         return tempchar;
//     }
// }
// bool checkpalindrome(char arr[],int n)
// {
//     int s=0;
//     int e=n-1;
//     while(s<e)
//     {
//         if(tolowercase(arr[s])!=tolowercase(arr[e]))
//         {
//             return 0;
//         }
//         else{
//             e--;
//             s++;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     char name[20];
//     cout<<"enter your name : ";
//     cin>>name;
//     cout<<"your name is "<<name<<endl;
//     int len= getlenght(name);
//     cout<<"lenght of string is : "<<len<<endl;
//     // reverse(name,len);
//     // cout<<"reverse string "<<name;
//     cout<<"string is a palindrome or not : "<<checkpalindrome(name,len);

// }


/***********************************valid palindrome******************************************************************************/

// bool valid(char ch)
// {
//     if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
//     {
//         cout<<"string is:"<<ch<<endl;
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }

    
// }
// char tolowercase(char ch)
// {
//     if(ch>='a'&& ch<='z')
//     {
//         return ch;
//     }
//     else{
//         char tempchar= ch-'A'+'a';
//         return tempchar;
//     }

// }

// bool checkpalindrome(string sr)
// {
//     int s=0;
//     int e=sr.length()-1;
//     while(s<=e)
//     {
//         if(sr[s]!=sr[e])
//         {
//             return 0;
//         }
//         else
//         {
//             e--;
//             s++;
//         }
//     }
//     cout<<"string afterpalindrome:"<<sr<<endl;
//     return 1;
// }

// int main()
// {
//     string sr;
//     getline(cin,sr);
//     cout<<"string is:"<<sr<<endl;
//     string temp="";

//     for(int j=0;j<sr.length();j++)
//     {
//         if(valid(sr[j]))
//         {
//             temp.push_back(sr[j]);
//         }
//     }
//     for(int j=0;j<sr.length();j++)
//     {
//         temp[j]= tolowercase(temp[j]);
//     }
//     cout<<"temp is:"<<temp;
//     return checkpalindrome(temp);
// }

/*************************************************************************end**************************************************/

// char GetMaxOccCharacter(string st)
// {
//     int arr[26]={0};
//     for(int i=0;i<st.length();i++)
//     {
//         int number=0;
//         number=st[i]-'a';
//         arr[number]++;
//     }
//     int max=-1; int ans=0;
//     for(int i=0;i<26;i++)
//     {
//         if(max<arr[i])
//         {
//             ans=i;
//             max=arr[i];
//         }
//     }
//     return ans+'a';
// }
// int main()
// {
//     string st;
//     getline(cin,st);
//     cout<<GetMaxOccCharacter(st);
// }

// int main()
// {
//     string str="";
//     getline(cin,str);
//     string temp="";
//     for(int i=0;i<str.length();i++)
//     {
//         if(str[i]==' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         temp.push_back(str[i]);
//     }
//     cout<<temp;
// }



// to check the starting index of input string from original string
// int main()
// {
//     string s;  ****original string
//     string part; ****input string
//     cin>>s>>part;
    
//     int slength=s.find(part);
//     cout<<slength;
// }


// int main()
// {
//     string s;
//     string part;
//     cin>>s>>part;
//     while(s.length()!=0 && s.find(part)<s.length() )
//     {
//         s.erase(s.find(part),part.length());
//     }
//     cout<<s;
// }



/************************************************************/
// int main()
// {
//     string chars;
//     cin>>chars;
//     int i=0;
//     int ansIndex=0;
//     int n=chars.size();
//     while(i<n)
//     {
//         int j=i+1;
//         while(j<n && chars[i]==chars[j])
//         {
//             j++;
//         }
//         chars[ansIndex++]=chars[i];
//         int count =j-i;
//         if(count >1)
//         {
//             string cnt= to_string(count);
//             for(char ch:cnt)
//             {
//                 chars[ansIndex]=ch;
//             }
//         }
//         i=j;

    // }
    // cout<<ansIndex;
// }
/********************************************************/