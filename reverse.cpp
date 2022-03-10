#include <iostream>
using namespace std;

int main() 
{  int t ;
   cin>>t; 
 while(t--)
    { 
        int n, reversedNumber = 0, remainder;

     //cout << "Enter an integer: ";
     cin >> n;

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout<< reversedNumber<<endl;
    }

    return 0;
}