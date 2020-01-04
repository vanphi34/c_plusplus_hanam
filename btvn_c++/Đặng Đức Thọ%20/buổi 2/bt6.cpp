/* Cho 3 số nguyên d, m và y
   Viêt hàm kiểm tra ngày d/m/y có phải là 1 ngày hợp lệ hay không?
   (chú ý luật năm nhuận nữa nhé!!!)*/
#include <bits/stdc++.h>
using namespace std;
int thang(int n)
{
    if (n ==1 || n==3 || n==5|| n==7 || n==8 || n==10 || n==12)
        return 31;
    else if (n == 4 || n == 6 || n == 9 || n == 11)
        return 31;
}
int main ()
{
    int d, m, y;
    cout<<"Nhap ngay thang nam can kiem tra: ";
    cin>>d>>m>>y;
    if (y>0 && thang(m) == 31 && d > 0 && d <= 31)
        cout << "true" << endl;
    else if (y>0 && thang(m) == 30 && d > 0 && d <= 30)
        cout << "true" << endl;
    else if (y>0 && m == 2 && y % 4 == 0 && d > 0 && d <= 29)
        cout << "true" << endl;
    else if (y>0 && m == 2 && y % 4 != 0 && d > 0 && d <= 28)
        cout << "true" << endl;
    else 
        cout << "false" << endl;
}