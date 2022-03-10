#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x;
   cin>>x;
   int k = (2*x-1);
   // cout<<k;
   int a[k][k];
   for(int i=1;i<=k;i++)
   {
       for(int j=1;j<=k;j++)
        {
            a[i][j]=x;
           /// a[i+1][j+1]=(x-1);
        }
    //   cin>>;
   }
   for(int i=1;i<=k;i++)
   {
       for(int j=1;j<=k;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
   }
	return 0;
}
