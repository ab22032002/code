#include<bits\stdc++.h>
using namespace std;
// only call by reference can perform the task of swapping because it deals with the address not the value 
void swap(int &a,int &b)
{
    int temp;
    temp =a;
    a=b;
    b=temp;
}
int main ()
{
    int x,y;
    cout<<"enter the value of x and y "<<endl;
    cin>>x>>y;
    cout<<"the values before swapping"<<endl<<x<<"\t"<<y<<endl;
    swap(x,y);
    cout<<"the values after swapping "<<endl<<x<<"\t"<<y<<endl;
    return 0 ;
}