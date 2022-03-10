#include<bits\stdc++.h>
using namespace std;
 void prime(int x, int y)
 {  
     for(int j=x;j<=y;j++)
    {
        int k =0;
         for(int i=2;i<j;i++)
          {
           if(j%i==0)
          {
            k++;
            break;
          }
          
         }
           if(k==0)
          { if(j==1){continue;}
        cout<<j<<endl;
          }
    }

 }
int main()
{
    int num1,num2;
    cout<<"enter the numbers between you want to print the prime numbers \n";
    cin>>num1>>num2;
    prime(num1,num2);
    //prime(num1,num2);
    // int k =0;
    // for(int i=2;i<num1;i++)
    // {
    //     if(num1%i==0)
    //     {
    //         k++;
    //     }
          
    // }
    // if(k==0)
    // {
    //     cout<<num1;
    // }
    return 0;
}