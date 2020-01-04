/* cho chiều dài và chiều rộng của 1 hình chữ nhật là a và b, nhập dữ liệu cho a và b từ bàn phím
   Tính chu vi và diện tích của hình chữ nhật, in chu vi và diện tích hcn lên màn hình */
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, cv, dt;
    cout << "\n Nhap do dai hai canh a va b cua hinh chu nhat: ";
    cin >> a >> b;
    cv=2*(a+b);
    dt=a*b;
    cout << "\n Chu vi va dien tich cua hinh chu nhat la " << cv << " va " << dt;
}