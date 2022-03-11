#include<bits\stdc++.h>
using namespace std;
void check_alpha(char x)
{
     if(isupper(x))
     cout<<"The character is an  uppercasealphabet\n";
     else if(islower(x))
         cout<<"the character is an lowercase alphabet";
     else 
     cout<<"its not an alphabet"<<endl;
}
int main()
{   char n;
    cout<<"enter the character to be stored "<<endl;
    cin>>n;
    check_alpha(n);
    return 0 ;
}
/*********  other functions ********************/
/***#include<stdio.h>
#include<ctype.h>

int main() {
   char val1 = 's';
   char val2 = '8';

   if(isdigit(val1))
   printf("The character is a digit\n");
   else
   printf("The character is not a digit\n");

   if(isdigit(val2))
   printf("The character is a digit\n");
   else
   printf("The character is not a digit");

   return 0;
}
**********************/