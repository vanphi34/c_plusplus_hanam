/* Little Vasya đã nhận được một bộ dụng cụ xây dựng tháp . 
   Bộ này bao gồm một số thanh gỗ, chiều dài của tất cả chúng được biết đến. 
   Một tháp sẽ được tạo thành bằng cách đặt các thanh chồng lên nhau với điều kiện 
   là chiều dài của chúng giống nhau. 
   Chiều cao của một tháp sẽ là số lượng các thanh gỗ được đặt chồng lên nhau.
   Cho mảng arr là mảng chứa các thanh gỗ khác nhau. Hãy giúp Vasya tính chiều cao 
   của tháp lớn nhất và tổng số tháp tối thiểu được tạo thành từ những mảnh gỗ đã cho.
*/
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a[100], n, m, chieucao, sothap;
    cout << "\n Nhap so thanh go Little Vasya co: ";
    cin >> n;
    m=n;
    for (int i=1; i<=n; i++)
    {
        cout << "\n Nhap do dai thanh go so " << i << ": ";
        cin >> a[i];
        while (a[i] <= 0)
        {
            cout << "\n Do dai lon hon 0, nhap lai do dai thanh go so " << i << ": ";
            cin >> a[i];
        }
    }
    for (int i = 1; i <=n; i++)
    {
        int tam = 1;
        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] == a[i])
            {
                tam++;
                for (int k = j; k < n; k++)
                    a[k] = a[k + 1];
                n--;
                j--;
            }

        }
        if (tam > chieucao)
            chieucao = tam;
    }
    sothap=n;
    cout << "Towers(a[" << m << "]) = [" << chieucao << "," << sothap << "]";
}