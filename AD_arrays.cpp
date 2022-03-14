#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    int mx_no = INT_MIN;  // built in value for minimun of integers 
    int min_no = INT_MAX; // built in value for the maximum of the integers 
    cout<<"enter the no. of array elements "<<endl;
    cin>>n;
    int a[n];
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
    }
     for(int i=1;i<=n;i++)
    {
       mx_no=max(mx_no,a[i]); // in built function to find the larger value 
       min_no=min(min_no,a[i]); // built in fn to find the smallest bet two 
    }
    cout<<endl;
    cout<<"maximun number is = "<<mx_no<<endl;
    cout<<"minimun number is ="<<min_no;
    return 0;
}