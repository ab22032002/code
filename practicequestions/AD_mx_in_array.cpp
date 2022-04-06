#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  int mx=INT_MIN;
  int n;
  cout<<"enter the size of the array"<<endl;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
      mx = max(a[i],mx);
      cout<<"max till"<<i<<"th element is "<<mx<<endl;
  }
  cout<<"max of the array is =="<<mx;
  return 0 ;
}