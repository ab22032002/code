#include<bits\stdc++.h>
using namespace std;
void elligible(int x)
{
    if(x>=18)
    {
        cout<<"you're elligible to vote"<<endl;
    }
    else
    {
        cout<<"you're not elligible to vote right now"<<endl;
    }
}
int main ()
{  int age;
   cout<<"enter your age to check your elligibility."<<endl;
   cin>>age;
   elligible(age);
   return 0;
}