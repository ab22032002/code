#include<bits/stdc++.h>
using namespace std;
void generate1(int x)
{
    for(int i=1;i<=x;i++)
        cout<<"*";
}
int main()
{  int x;
   cout<<"enter the number of loops you want";
   cin>>x;
   while(x--)
   {  int k;
      cout<<"no of pattern lines ";
      cin>>k;
   	for(int i=1;i<=k;i++)
   	{
   		generate1(i);
   		for(int j=k-i;j>0;j--)
   		{
   			cout<<"##";
   		}
   		generate1(i);
   		cout<<endl;
   	}
   }
	return 0;
}
