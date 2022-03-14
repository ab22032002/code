#include<bits/stdc++.h>
using namespace std;
int bin_search(int a[],int n,int key)
{
    int end=n ;//sizeof(a)/sizeof(int);
    int beg= 1;//end-end+1;
    int mid;
    for(int i=1;i<=n;i++)
    {
        mid=(beg+end)/2 ;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            end=mid;
        }
        else  if(a[mid]<key)
        {
            beg=mid;
        }
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
    cout<<"nowsearchinf starts"<<endl;
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<bin_search(a,n,key);
    return 0;
}
   
