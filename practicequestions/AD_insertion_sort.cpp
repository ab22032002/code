#include<bits/stdc++.h>
using namespace std;
void ins_sort(int a[],int n)
{
    for(int i =1;i<n;i++)
    {
        int current = a[i];
        int j = i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
}
int main()
{ 
  int n;
  cout<<"enter the size of the array"<<endl;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  ins_sort(a,n);
//   here we have to give the array name and the size pf the array 
  for(int k=0;k<n;k++)
  {
      cout<<a[k]<<endl;
  }
  return 0;
}