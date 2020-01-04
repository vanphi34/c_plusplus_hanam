/* Cho ba số nguyên A, B, C. Viết chương trình để kiểm tra xem các số đó có thể là độ dài ba cạnh của 
   một tam giác hay không. Nếu bộ ba số đó có thể là ba cạnh của một tam giác,trả về 
   "They could be 3 sides of a triangle"; ngược lại, trả về "They could not be 3 sides of a triangle".*/
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, c;
    cout << "\n Nhap do dai ba canh cua tam giac: ";
    cin >> a >> b >> c;
    while (a<=0 || b<=0 || c<=0)
    {
        cout << "\n Do dai phai lon hon khong, xin nhap lai: ";
        cin >> a >> b >> c;
    }
    if (a<b+c && b<a+c && c<a+b)
        cout << "\n They could be 3 sides of a triangle"; 
    else 
        cout << "They could not be 3 sides of a triangle";
}