#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n)
{  
    //  int min1=INT_MAX;
    int temp;
    for(int i=0;i<n-1;i++)
    {   
       // int min1=INT_MAX; // INT_MAX bulit in function 
        for(int j=0;j<n-i-1;j++)
        {
          if(a[j+1]<a[j])
          {
              temp= a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
        }
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
  bubble_sort(a,n);
//   here we have to give the array name and the size pf the array 
  for(int k=0;k<n;k++)
  {
      cout<<a[k]<<endl;
  }
  return 0;
}
/// 