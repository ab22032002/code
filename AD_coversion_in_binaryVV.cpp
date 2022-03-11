#include<bits\stdc++.h>
using namespace std;
int b_to_d(long x)
{
    long int k =0;
    long int i=0;
    long int result =0;
    while(x>0)
    {
        k=x%10;
        if(k==1){
        result += pow(2,i);}
        i++;
        x= x/10;
    }
    return result;
}
int main()
{   long int  bin;
    cout<<"enter a binary number"<<endl;
    cin>>bin;
    cout<<"this is the decimal conversion of the binary =="<<b_to_d(bin);
    return 0;
}
