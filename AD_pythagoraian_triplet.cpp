#include<bits\stdc++.h>
using namespace std;
int max(int x,int y) 
{
  return (x>y)?x:y;
}
int max_amg3(int x,int y,int z)
{  
    int k ;
    k = max(x,max(y,z));
    return k;  
}
bool triplet(int a,int b,int c)
{  
    int i = max_amg3(a,b,c);
    int j,k;
     if(a==i)
     { 
       j=b;
       k=c;
     }
     else if(b==i)
     {
        j=a;
        k=c;
     }
     else
     {
       j=a;
       k=b;
     }
     
    if(pow(i,2)==(pow(j,2)+pow(k,2)))
    {
       return true;
    }
    else 
    {
        return false;
    }
}
int main()
{ int a,b,c;
  cout<<"enter the values "<<endl;
  cin>>a>>b>>c;
 if(triplet(a,b,c))
 {
    cout<<"its pythagorean triplet"<<endl;
 }
 else 
 {
     cout<<"its not"<<endl;
 }
  return 0 ;
}