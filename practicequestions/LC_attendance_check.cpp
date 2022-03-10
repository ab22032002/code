#include<bits/stdc++.h>
using namespace std;
int main()
{  int a=0,l=0;
   string str;
   cout<<"enter the string"<<endl;
   cin>>str;
   for(int i=0;i<str.size();i++)
   {
       if(str[i]=='A')
       {
           a++;
       }
       else if(str[i]=='L')
       {
           if( (str[i+1]=='L')&& (str[i+2]=='L') )
           {
               l=3;
           }
       }
   }
   if(a<2&&l<3)
   {
       cout<<"you're marked present"<<endl;
   }
   else
   {
      cout<<"you're marked absent"<<endl;
   }
	return 0;
}
