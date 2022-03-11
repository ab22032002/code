#include<bits\stdc++.h>
using namespace std;
//#define max(a,b) (a>b)?return a: return b
int max(int a,int b)
{
    return (a>b)?a:b;
}
int max_amg_three(int a,int b, int c)
{
    return (max(a,max(b,c)));
}
int min_amg_three(int a,int b, int c)
{
    return (min(a,min(b,c)));
}
int min(int a,int b)
{
    return (a<b)?a:b;
}
int main ()
{   int a,b,c;
    cout<<"enter three numbers"<<endl;
    cin>>a>>b>>c;
    int m = max(a,max(b,c));  // one of the greatest example of recursions 
    cout<<"the largest amonf these is "<<m<<endl;
    int n = min(a,min(b,c));
    cout<<"the smallest among this is "<<n<<endl;
    int k = max_amg_three(a,b,c);
    cout<<"the largest with second method "<<k<<endl;
    cout<<"the smallest  with second method "<<min_amg_three(a,b,c)<<endl;
    return 0 ;
}