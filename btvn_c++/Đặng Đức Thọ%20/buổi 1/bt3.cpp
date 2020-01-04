#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n=11;
    for (int i=1; i<=n; i+=2)
     {
         for (int j=1; j<=(n-i)/2; j++)
          cout << " ";
         for (int k=1; k<=i; k++)
          cout << "*";
         cout << "\n";
     }
    cout << "    " << "***\n";
    for (int i = 3; i <= n; i += 2)
    {
        for (int j = 1; j <= (n - i) / 2; j++)
            cout << " ";
        for (int k = 1; k <= i; k++)
            cout << "*";
        cout << "\n";
    }
    for (int i=1; i<=4; i++)
        cout << "    " << "***\n";
}