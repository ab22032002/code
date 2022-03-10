#include<bits/stdc++.h>
using namespace std;
int main()
{ string s1,s2,s;
  //cout<<"enter your first string"<<endl;
  getline(cin,s1);
  //cin.ignore();
  //cout<<"enter your second string"<<endl;
  getline(cin,s2);
  s= s1+s2;
  cout<<s1.size()<<" ";
  cout<<s2.size()<<endl;
  cout<<s<<endl;
  string rev1,rev2;
  for(int i= s1.size()-1;i>=0;i--)
    rev1.push_back(s1[i]);
  for(int i= s2.size()-1;i>=0;i--)
    rev2.push_back(s2[i]);
    cout<<rev1<<" "<<rev2<<endl;

 return 0;
}

