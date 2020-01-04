#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n=35;
    for (int i=1; i<=n; i+=2)
    {
        for (int j=1; j<=i; j++)
         cout << "*";
        cout << "\n";
    }
}