#include<bits/stdc++.h>
using namespace std;
int main()
{ 
 int t;
 cin>>t;
 while(t--)   
 {   int n;
     cin>>n; 
	 for (int i =1;i<=n;i++)
	  {
		for(int j=1;j<=i;j++)
			cout<<"*";
	 	 cout<<endl;
	  }
 }
	
} 
/**  1st input how many times you wanted to print
     so as many time you entered must enter that quantity of numbers to get an output*/ 
