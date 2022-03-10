#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int arr[x];
	for(int i=1;i<=x;i++)
	{
		cin>>arr[i];
	}
	for(int j=x;j>=1;j--)
	{
		cout<<arr[j]<<" ";
	}
	return 0;
}