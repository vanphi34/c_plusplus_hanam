/* 2: Viết chương trình nhập vào một số nguyên n;
      tính tổng các số nguyên tố thuộc đoạn[1..n].
      Cho biết có bao nhiêu số nguyên tố thuộc đoạn đó
*/
#include <bits/stdc++.h>
using namespace std;
int snt(int n)
{
    if (n<2) return 0;
    for (int i=2; i<n; i++)
      if (n%i==0) return 0;
    return 1;
}
int main ()
{
    int n, dem=0, tong=0;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    while (n<2)
    {
        cout << "Nhap lai so nguyen n: ";
        cin >> n;
    }
    for (int i=2; i<=n; i++)
      if (snt(i)==1)
      {
          dem++;
          tong+=i;
      }
    cout <<"Day tu 1 den n co "<<dem<<" so nguyen to"<<endl<<"Tong cac so nguyen to la "<<tong;
}