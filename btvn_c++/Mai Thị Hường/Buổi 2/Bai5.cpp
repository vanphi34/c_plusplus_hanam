#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int n;
    long f0 = 0, f1 = 1, fn;
    cout << "Nhap mot so :";
    cin >> n;

    while (f0 < n / 2)
    {
        cout << f1 << "  ";
        fn = f0 + f1;
        f0 = f1 ;
        f1 = fn;
    }


    return 0;
}
