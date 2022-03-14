#include<bits/stdc++.h>
using namespace std;
void sel_sort(int a[],int n)
{   int min1=INT_MAX;
    for(int i=1;i<n;i++)
    {   
       // int min1=INT_MAX; // INT_MAX bulit in function 
        for(int j=i;j<=n;j++)
        {
           min1= min(a[j],min1);
        }
        a[i]=min1;
        min1=INT_MAX;
    }
    
}
int main()
{ 
  int n;
  cout<<"enter the size of the array"<<endl;
  cin>>n;
  int a[n];
  for(int i=1;i<=n;i++)
  {
      cin>>a[i];
  }
  sel_sort(a,n);
  for(int i=1;i<=n;i++)
  {
      cout<<a[i]<<endl;
  }
  return 0;
}