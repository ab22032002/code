#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
int main()
{   int n ;
    cout<<"enter the value of n \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j =1;j<=i;j++)
        {
            cout<<"*";
        }
         cout<<endl;
    }
    for(int i=n-1;i>=1;i--) // either ways of wriiting n-1 to remove the glitch of the extra bit here // we can use the additional lline to print the next line 
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j =1;j<=i;j++)
        {
            cout<<"*";
        }
         cout<<endl;
    }
    return 0;
}