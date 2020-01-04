/*1: Viết chương trình nhập vào số tiền phải trả của khách hàng. 
     In ra số tiền khuyến mại với quy định: 
     Nếu số tiền phải trả thuộc [200, 300) thì khuyến mại 20%. 
     Nếu số tiền phải trả từ 300 trở lên thì khuyến mại 30%. 
     Còn lại thì không khuyến mại.
*/

#include <bits/stdc++.h>
using namespace std;
int main ()
{
    float n,km;
    cout<<"Nhap so tien khach hang phai tra: ";
    cin>>n;
    while (n < 0)
    {
        cout << "Nhap lai so tien khach hang phai tra: ";
        cin >> n;
    }
    if (n>=200 && n<300)
    {
        km= n * 0.2;
        cout << "Khuyen mai: " << km<<endl;;
    }
    else if (n>=300)
    {
        km = n * 0.3;
        cout << "Khuyen mai: " << km<<endl;
    }
    else
        cout << "Khach hang khong duoc khuyen mai"<<endl;
}