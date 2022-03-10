#include<bits/stdc++.h>
using namespace std;
int main()
{ string str = "hello";
   for(int i=0;i<str.size();i++)
    cout<<str[i]<<endl;
    str[3]='i';
    for(int i=0;i<str.size();i++)
    cout<<str[i]<<endl; /// changed using the character
 return 0;
}

