/* Nhập vào 1 số n, in ra n số fibonacci đầu tiên.*/
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    while (n < 2)
    {
        cout << "Nhap lai so nguyen n: ";
        cin >> n;
    }
    cout<<"Day fibonacci: 0 1";
    int a=0, b=1;
    for (int i=3; i<=n; i++)
    {
        int c=a+b;
        a=b; b=c;
        cout<<" "<<c;
    }
}