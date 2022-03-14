#include<bits/stdc++.h>
using namespace std;
int lin_search(int a[],int n,int key)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]==key)
        return i;
    }
    return -1;
}
int main()
{   
    int n,key;
    int mx_no = INT_MIN;  // built in value for minimun of integers 
    int min_no = INT_MAX; // built in value for the maximum of the integers 
    cout<<"enter the no. of array elements "<<endl;
    cin>>n;
    int a[n];
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter your key here"<<endl;
    cin>>key;
    cout<<lin_search(a,n,key); 
    // emphasis here as call didn't consist of the a[], but a  
return 0;
}