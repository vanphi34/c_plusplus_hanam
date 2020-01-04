#include <iostream>

using namespace std;

int fibonacci ( int a)
{
    if ( a==0 || a==1)
        return a;
    else
        return fibonacci( a-1 ) + fibonacci( a-2 );

}
int main()
{
    int n;
    do
    {
        cout << "Nhap mot so tu nhien n: "; cin >> n;
        if ( n<0 ) cout << "So n phai co gia tri duong.";
    } while ( n<0 );
    cout << "Day fibonacci cua ban : \n";
    for ( int i=0 ; i<n ; i++)
        cout << fibonacci(i) << "   ";
    return 0;
}
