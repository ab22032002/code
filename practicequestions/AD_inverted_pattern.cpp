#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
int main()
{   int n ;
    cout<<"enter the value of n \n";
    cin>>n;
    /*** code for
     *  12345
     *  1234
     *  123
     *  12
     *  1
     * ****/
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)  
        {
            cout<<j<<" ";
        }
         cout<<endl;
    }
    cout<<endl;
}
/*******
 this is the code for 
 1
 1 2
 1 2 3
 1 2 3 4 
 1 2 3 4 5 
 for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
         cout<<endl;
    }
    cout<<endl;
 *****************/
