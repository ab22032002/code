#include<bits/stdc++.h>
using namespace std;
int main()
{ 
//   int mx=INT_MIN;
  int n;
  cout<<"enter the size of the array"<<endl;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
//   the sum menu starts from here 
int sum2 =0,sum;
for(int i=0;i<n;i++)
{   sum =0;
    for(int j=i-1;j<n;j++)
    {
      sum += a[j];
     cout<<sum<<endl;
    }
    sum2+=sum;
}
cout<<"the sum of all the subarrays is =="<<sum2;
return 0 ;
}