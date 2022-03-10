#include<bits\stdc++.h>
using namespace std;
void fibo(int n)
{
    int t1=0;
    int t2=1;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        int nxtterm= t1+t2;
        t1=t2;
        t2=nxtterm;
    }
}
int main()
{   int num;
    cout<<"enter a number upto which the fibonacci series is required to print \n";
    cin>>num;
    fibo(num);
    return 0;
}