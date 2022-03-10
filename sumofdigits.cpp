#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int t;
   cin>>t;
    while(t--)
	{int digit,sum=0;
	cin>>digit;
	while(digit>0)
	{
		int m = digit%10;
		sum += m;
		digit= digit/10;
	}
	cout<<sum<<endl;
	}
}
