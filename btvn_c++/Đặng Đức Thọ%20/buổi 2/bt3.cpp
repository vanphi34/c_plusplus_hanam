/*
3: Viết chương trình tính và hiển thị ra màn hình tiền điện phải trả của một hộ gia đình trong một tháng. 
   Với số kwh điện tiêu thụ trong tháng là n được nhập vào từ bàn phím và giá 1kwh được tính như sau: 
   100 kwh đầu tiên: 750đ/1kwh; từ kwh thứ 101 đến kwh thứ 200: 1250đ/1kwh; 
   từ kwh thứ 201 đến kwh thứ 300: 1750đ/1kwh; từ kwh thứ 301 trở đi: 3000đ/1kwh.
*/
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    float n, tien;
    cout << "Nhap so kwh tieu thu: ";
    cin >> n;
    while (n <0)
    {
        cout << " Nhap lai so kwh tieu thu: ";
        cin >> n;
    }
    if (n <= 100)
    {
        tien = n * 750;
        cout << "Tien dien phai tra: " << tien <<" vnd"<< endl;
        ;
    }
    else if (n <200)
    {
        tien = 100*750+(n-100)*1250;
        cout << "Tien dien phai tra: " << tien << " vnd" << endl;
    }
    else if (n<300)
    {
        tien = 100 * 750 + 100*1250 + (n - 200) * 1750;
        cout << "Tien dien phai tra: " << tien << " vnd" << endl;
    }
    else
    {
        tien = 100 * 750 + 100 * 1250 + 100*1750 + (n - 300) * 3000;
        cout << "Tien dien phai tra: " << tien << " vnd" << endl;
    }
}