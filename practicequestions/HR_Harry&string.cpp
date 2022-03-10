#include<bits/stdc++.h>
using namespace std;
void rev(string s)
{   string rev;
    int i;
    //getline(cin,s);
  for(i<s.size(); i>=0; i--)
    rev.push_back(s[i]);
  cout<<rev;
}
int main()
{  string str;
   cout<<"ENTER THE STRING"<<endl;
   cin>>str;
   rev(str);
 ///  cout<<"reverse of the string is "<<rev(str)<<endl;
	return 0;
}
