#include<bits/stdc++.h>
using namespace std;
int main()
{  unsigned int x, count =0;
   cin>>x;
   unsigned int x1=0,x2=0;
   for(x1=1;x1<x;x1++)
   {  
   	for(x2=1;x2<x;x2++)
   	{ 
   	 if((x1 != x2) && (x1+x2) == x/2 )
   	 {
   		count++;
   		cout<<"pattern {"<<x1<<x1<<x2<<x2<<"}"<<endl;
   	 }
      }
   }
   cout<<count/2;
  // cout<<"pattern{"<<x1<<x1<<x2<<x2<<"}"<<endl;
	return 0;
}