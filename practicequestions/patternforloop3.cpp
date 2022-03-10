
   /*
                            if n=3
                            3 3 3 3 3
                            3 2 2 2 3
                            3 2 1 2 3
                            3 2 2 2 3
                            3 3 3 3 3
                            */

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int k;

      /* Upper Half */
  for(int i=1;i<=n;i++){
    k=n;
    while (k+i!=n+1)                    // To decrease
    {
      cout<<k<<" ";
      k--;
    }
    for (int j = 1; j <= 2*k-1; j++)   // To repeat
    {
      cout<<k<<" ";
    }

    for(int j=k+1;j<=n;j++){          // To increase
      cout<<j<<" ";
    }

    cout<<endl;


  }
      /* Lower Half */
  for(int i=n-1;i>=1;i--)
    {
    k=n;
    while (k+i!=n+1)                   // To decrease
    {
      cout<<k<<" ";
      k--;
    }
    for (int j = 1; j <= 2*k-1; j++)   // To repeat
    {
      cout<<k<<" ";
    }
    for(int j=k+1;j<=n;j++){          // To increase
      cout<<j<<" ";
    }

    cout<<endl;


  }

    return 0;
}
