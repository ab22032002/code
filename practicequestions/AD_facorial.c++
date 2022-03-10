#include<bits\stdc++.h>
using namespace std;
void fact(int x)
{   int f = 1;
    for(int i =1;i<=x;i++)
    {
      f=f*i;   
    }
    cout<<f;
}
int main()
{
    int x;
    cout<<"enter the value of x\n";
    cin>>x;
    fact(x);
    return 0;
}