#include<bits\stdc++.h>
using namespace std;
int fact(int x)
{   if(x==0)
    {
        return 1;
    }
    int f = 1;
    for(int i=1;i<=x;i++)
    {
      f=f*i;   
    }
    return f;
}
 int ncr(int a,int b)
 { 
     int k;
     k = fact(a)/((fact(a-b)*fact(b))) ;
     return k;
 }
 void pascals_triangle(int n)
 {
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<i;j++)
         { 
            cout<<ncr(i,j);
         }
         cout<<1;
         cout<<endl;
     }
 }
int main()
{ int a,b,k;
  cout<<"enter the numbers in NCR pattern to get the combination \n";
  cin>>a;
   pascals_triangle(a);
  return 0;
}