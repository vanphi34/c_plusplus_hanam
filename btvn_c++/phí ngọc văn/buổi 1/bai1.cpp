#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n;
    a=0;b=1;

    cin>>n;
    while(b<=n)
    {
        if(n%b==0)
            a=a+b;
            b++;
    }
    cout<<a;
    return 0;
}
