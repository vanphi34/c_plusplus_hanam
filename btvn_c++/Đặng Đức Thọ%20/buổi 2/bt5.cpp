/* Nhập vào 1 số n, kiểm tra xem số n có thuộc dãy fibonacci hay không? */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (n < 0)
        cout << "So vua nhap khong thuoc day fibonacci"<<endl;
    else if (n==0 || n==1)
        cout << "So vua nhap thuoc day fibonacci"<<endl;
    else
    {
        int a = 0, b = 1;
        for (int i = 0; i < n; i++)
        {
            int c = a + b;
            a = b;
            b = c;
            if (c==n)
            {
                cout << "So vua nhap thuoc day fibonacci"<<endl;
                break;
            }
            else if (c>n) 
            {
                cout << "So vua nhap khong thuoc day fibonacci"<<endl;
                break;
            }
        }
    }  

}
