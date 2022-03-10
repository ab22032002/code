#include<bits/stdc++.h>
using namespace std;
int main()
{   
	 int x,a;
	 long  long k = 1;
	cin>>x;
	while(x--)
	{
		cin>>a;
		k = (k*a) % (1000000000+7);
	}
	cout<<k;
	return 0;
}