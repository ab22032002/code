#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {   /// to give the front space
       int j;
       for(j=1;j<=(n-i);j++)
       {
           cout<<"   "; /// its must be one more than the space given to between the numbers
       }
       /// to print the particular pattern
       int k=i;
       for(;j<=n;j++)
       {
           cout<<k--<<"  ";
       }
       k=2;
       for(;j<=n+i-1;j++)
       {
           cout<<k++<<"  ";
       }
       cout<<endl;
   }
   return 0;
}
