/* Nhập hai số nguyên a,b; tính tổng, hiệu, tích, thương, đồng dư (phép chia dư %)
   và in chúng ra màn hình.*/
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, tong, hieu, tich, dongdu;
    float thuong;
    cout << "\n Nhap hai so nguyen a va b: ";
    cin >> a >> b;
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = (float) a/b;
    dongdu = a % b;
    cout << "\n Tong hai so nguyen a va b la: " << tong;
    cout << "\n Hieu hai so nguyen a va b la: " << hieu;
    cout << "\n Tich hai so nguyen a va b la: " << tich;
    cout << "\n Thuong hai so nguyen a va b la: " << thuong;
    cout << "\n Dong du hai so nguyen a va b la: " << dongdu;
}