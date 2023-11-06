#include<iostream>
using namespace std;
void update(int **ptr2)
{
    ptr2 = ptr2 + 1;
    cout<<ptr2<<endl;
    // *ptr2 = (*ptr2) + 1;
    // **ptr2 = (**ptr2) + 1;
}

int main()
{
    int i = 9;
    int *p = &i;
    int **ptr = &p;

    // cout<<"*yeh dono same print krege, mtlab address of i :*"<<endl;
    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*ptr<<endl;

    // cout<<"*yeh dono same print krege, mtlab value of i :*"<<endl;
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**ptr<<endl;

    // cout<<"address of ptr: " <<&ptr<<endl;

    // cout<<"address of p: "<<endl<<&p<<endl;
    // cout<<ptr<<endl;




    cout<<"before the update: "<<i<<endl;
    cout<<"before the update: "<<p<<endl;
    cout<<"before the update: "<<ptr<<endl;
    update(ptr);
    cout<<"after the update: "<<i<<endl;
    cout<<"after the update: "<<p<<endl;
    cout<<"after the update: "<<ptr<<endl;    

return 0;
}