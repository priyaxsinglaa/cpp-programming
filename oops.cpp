#include<iostream>
using namespace std;

// class hero{
//     public:
//     int health;
//     char level;
//      when a function is private it can be used with in the function
//      void funlevel(char level)
//      {
//          cout<<level<<endl;
//      }
// }



//     int getH()
//     {
//         return health;
//     }
//     char getL()
//     {
//         return level;
//     }
//     void setH(int h )
//     {
//         health =h;
//     }
//     void setL(char ch)
//     {
//         level =ch;
//     }
// };
// int main()
// {
//     hero ab;
    
//     char ch='a';
//     ab.setL('l');
//     //cout<<ab.gethealth()<<'%';
//     cout<<ab.getL();
   
//     hero *b= new hero;
//     b->setL('G');
//     cout<<b->getL();
// }


/*********************************erase duplicate element in the set  leetcode solution*********************/
// #include<stdio.h>
// #include<set>
// #include<vector>
// using namespace std;
// int main()
// {
//       vector<int> nums(1,1,2);
      
//       set<int>s;
//         for(auto i:nums) 
//         {
//             s.insert(i);
//         }
        
//         int a = 0;
//         for(auto i : s) 
//            {   nums[a] = i,a++;}
//         return s.size();
    
// }



class Hero{
    public:
    int health;
    char level;
    // when a function is private it can be used with in the function
    void funlevel(char level)
    {
        cout<<level<<endl;
    }
};

int main()
{
    Hero Spiderman;

    Spiderman.health = 90;
    Spiderman.level = 'D';
    Spiderman.funlevel(Spiderman.level);

    cout <<Spiderman.health<<endl;
    cout<<Spiderman.level<<endl;
}