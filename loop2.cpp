#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>i;
	for(n=i;n<=9;n++)
	{ 
	  if((n>=1) && (n<=9))
	 { 
	 	switch(n)
       {
       	case 1:
       	cout<<"one"<<endl;
       	break;
       	case 2:
       	cout<<"two"<<endl;
       	break;
       	case 3:
       	cout<<"three"<<endl;
       	break;
       	case 4:
       	cout<<"four"<<endl;
       	break;
        case 5:
       	cout<<"five"<<endl;
       	break;
       	case 6:
       	cout<<"six"<<endl;
       	break;
       	case 7:
       	cout<<"seven"<<endl;
       	break;
       	case 8:
       	cout<<"eight"<<endl;
       	break;
       	case 9:
       	cout<<"nine"<<endl;
       	break;

       }// end of switch
     }//end of if 
     else
     {
     	if(i>9)
     		cout<<"greater than 9";
     
     }

   }
return 0;
}