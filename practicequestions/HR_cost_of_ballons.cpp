#include<bits\stdc++.h>
using namespace std;
int costofbalon(,int[][],int,int);
int main()
{   int n,b1,b2;
    int cost1=0,cost2=0,total=0; 
    cout<<"enter the number of the\n";
    cin>>n;
    cout<<"enter the ballons cost respectively\n"
    cin>>b1>>b2;
    int a[2][n];
    // cout<<n;
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
   int  costofbalon(int a[][], int x, int y)
   {
       for(int j=1;j<=n,j++)
       {
        cost1+=a[j][1];
       }
       cout<<cost1;
   }
   costofbalon(a[2][n],5,6);
   return 0;
}