#include <iostream>

using namespace std;

int fibonacci ( int a)
{
    if ( a==0 || a==1 || a==2 || a==3)
        return a;
    else
        return fibonacci( a-1 ) + fibonacci( a-2 );

}

int main()
{
    int n,dem=0;
    cout << "Nhap so tu nhien n= "; cin >> n;
    for ( int i=0 ; i<=n ; i++)
        if ( n == fibonacci(i))
            {
                dem++;
            }
    if ( dem == 1) cout << n << " thuoc day fibonacci.";
    else cout << n << " khong thuoc day fibonacci.";
    return 0;
}
