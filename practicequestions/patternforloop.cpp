#include<bits/stdc++.h>
using namespace std;
int main()
{  int x;
   cin>>x;
   int k =x;
   for(int i=1;i<=(2*x-1);i++)
   {
       for(int j=1;j<=(2*x-1);j++)
       {
       if(i>1&& i<= 2*k-i && j>1 &&j<= 2*k-i)
       {
           cout<<k-1<<" ";

       }
       else
       {
           cout<<x<<" ";

       }

       }
       cout<<endl;

   }
	return 0;
}
