#include<bits/stdc++.h>
using namespace std;
int large(int a , int b)
{ 
   return ((a>b)?a:b);
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int max;
	max = large(d,large(c,large(a,b)));
	cout<<max;
	return 0;

}