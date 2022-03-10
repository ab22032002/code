#include<bits/stdc++.h>
using namespace std;
int main()
{
  // cout<<" enter the strings "<<endl;
   string str1, str2;
   cin>>str1;
   //cout<<str1<<endl;
  // cout<<"enter the second string"<<endl;
   cin>>str2;
  // cout<<str2<<endl;
   //int i = 0,j=0;
  // cout<<"size of the array is ::"<<str1.size()<<endl;
   for(int i=0;i<str2.size();i++)
   {
       int j =0;
       while(j<str1.size())
       {
           if(str2[i]==str1[j])
           {
               for(int k=j;k<str1.size();k++)
                str1[k]=str1[k+1]; /// shifting
           }
           else
           {
               j++;
           }
       }
   }

   cout<<str1;
	return 0;
}





/***for(int i=0;i<str2.size();i++)
   {
       for(int j=0;j<str1.size();j++)
      {
        if(str2[i]==str1[j])
       {
           str1[j]=str1[j+1];
           break;
       }
      }
   }
   ***/

   /***
   while(i<str1.size())
   {   int j =0;
       while(j<str2.size())
       { if(str1[i]==str2[j])
           {
               ///cout<<str1[i]<<endl;
               str1.erase(remove(str1.begin(),str1.end(), str1[i]), str1.end());
           }

        // cout<<str2[j];
         j++;
        // cout<<str1[i]<<endl;
       }
       i++;
   }

   ***/
