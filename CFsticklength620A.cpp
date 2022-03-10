#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   unsigned int x ,count=0;
   cin>>x;
   unsigned int x1,x2,x3,x4;
   x1= 1+ rand()%x;
   x2= 1+ rand()%x;
   x3= 1+ rand()%x;
   x4= 1+ rand()%x;
   if((x1+x2+x3+x4)== x)
   {
   	if(x1==x2 && x3==x4 && x1!=x3 && x2!=x4)
   	{
   		count++;
   	}
   }
   cout<<count;
  return 0;
}