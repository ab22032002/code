#include<bits\stdc++.h>
using namespace std;
int b_to_d(long x,int m)
{
    long int k =0;
    long int i=0;
    long int result =0;
    while(x>0)
    {
        k=x%10;
        result += k*pow(m,i);
        i++;
        x= x/10;
    }
    return result;
}
void choose()
{   int m;
    cout<<"enter your base"<<endl;
    cin>>m;
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    switch(m)
    {
        case 2:
       cout<<b_to_d(x,m);
       break;
       case 8:
       cout<<b_to_d(x,m);
       break;
    }
}

int main()
{   
    choose();
    return 0;
}
