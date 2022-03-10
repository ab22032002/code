#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
int main()
{   int n ,sum=0;
    cout<<"enter the value of n \n";
    cin>>n;
    int num =n;
    while(n>0)
    {
        int x=n %10;
        sum+=pow(x,3);
        n/=10;
    }
    if(sum==num)
    {
        cout<<"this is an armstrong number\n";
    }
    else
    {
      cout<<"this is not an armstrong number\n";
    }
    return 0 ;
}