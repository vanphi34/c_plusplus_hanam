#include <iostream>

using namespace std;

int main()
{
    int n,a;
    do
    {
        cout << "Nhap so Kwh dien tieu thu:"; cin >> n;
        if(n<0) cout << "So Kwh tieu thu phai co gia tri duong.\n";
    } while (n<0);
    if(n<100) a=750*n;
    else if(n<200) a = 100*750 + (n-100)*1250;
    else if(n<300) a = 100*750 + 100*1250 + (n-200)*1750;
    else a = 100*750 + 100*1250 + 100*1750 + (n-300)*3000;
    cout << "Tien dien phai tra la: " << a << "VND";
    return 0;
}
