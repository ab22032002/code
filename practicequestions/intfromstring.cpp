#include<bits/stdc++.h>
using namespace std;
int main()
{ string str;
  cout<<"enter your string"<<endl;
  getline(cin,str);
  int last_digit = str[str.size()-1] - '0';/// by subtracting the ASCII value of integer at last position by 0 as it is also treated here as an character.
  cout<<last_digit;
 return 0;
}

