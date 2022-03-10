#include<bits/stdc++.h>
using namespace std;
void update(int &a, int &b)
{
	int k,j;
	j = a + b;
	k = a - b;
	//b = a - b;
	//cout<<b<<endl;
	if(k>0)
	{
		b = k;
	}
	else
	   b = (k * (-1) );
	
	   a = j;

}
int main()
{
	int a,b;
	cin>>a>>b;
	/*int *pa,*pb;
	pa= &a;
	pb= &b;*/
	update(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
}