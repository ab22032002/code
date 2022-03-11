#include<bits\stdc++.h>
using namespace std;
int fact(int x)
{   int f = 1;
    for(int i =1;i<=x;i++)
    {
      f=f*i;   
    }
    return f;
}
// int NCR(int n,int r)
// {
//     int k = fact(n)/((fact(n-r)*fact(r))) ;
//     return k;
// }
 int ncr(int a,int b)
 { int k;
   k = fact(a)/((fact(a-b)*fact(b))) ;
   return k;
 }
int main()
{ int a,b,k;
  cout<<"enter the numbers in NCR pattern to get the combination \n";
  cin>>a>>b;
   // k = fact(a)/((fact(a-b)*fact(b))) ;
   //cout<<k;
  // ncr(a,b);
   cout<<ncr(a,b);
  return 0;
}