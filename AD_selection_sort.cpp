// #include<bits/stdc++.h>
// using namespace std;
// void sel_sort(int a[],int n)
// {   int min1=INT_MAX;
//     for(int i=1;i<n;i++)
//     {   
//        // int min1=INT_MAX; // INT_MAX bulit in function 
//         for(int j=i+1;j<=n;j++)
//         {
//            min1= min(a[j],min1);
//            // inbuilt_function 
//         }
//         a[i]=min1;
//        // min1=INT_MAX;
//     }
    
// }
// int main()
// { 
//   int n;
//   cout<<"enter the size of the array"<<endl;
//   cin>>n;
//   int a[n];
//   for(int i=1;i<=n;i++)
//   {
//       cin>>a[i];
//   }
//   sel_sort(a,n);
// //   here we have to give the array name and the size pf the array 
//   for(int i=1;i<=n;i++)
//   {
//       cout<<a[i]<<endl;
//   }
//   return 0;
// }
/****************** program starts from here ***********************/
#include<bits/stdc++.h>
using namespace std;
void sel_sort(int a[],int n)
{  
    //  int min1=INT_MAX;
    int temp;
    for(int i=1;i<n;i++)
    {   
       // int min1=INT_MAX; // INT_MAX bulit in function 
        for(int j=i+1;j<=n;j++)
        {
          if(a[j]<a[i])
          {
              temp= a[i];
              a[i]=a[j];
              a[j]=temp;
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
  for(int i=1;i<=n;i++)
  {
      cin>>a[i];
  }
  sel_sort(a,n);
//   here we have to give the array name and the size pf the array 
  for(int k=1;k<=n;k++)
  {
      cout<<a[k]<<endl;
  }
  return 0;
}