#include<bits/stdc++.h>
using namespace std;
int dec_to_bin(int n)
{
    int k;
    int digit=0;
    while(n>0)
    {
        k=n%2;
        digit=digit*10+k;
        n/=2;
    }
    return digit;
}
int main()
{   int x;
    cout<<"enter the digit "<<endl;
    cin>>x;
    cout<<dec_to_bin(x);
    return 0;
}