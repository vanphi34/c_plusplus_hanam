
#include <bits/stdc++.h>
using namespace std;

void xuatmang(int a[], int n)
{
    cout << "\n";
    for (int i = 1; i <=n; i++)
        cout << a[i] << " ";
    cout << "\n";
}
int main ()
{
    int a[100], n, m, chieucao=1, sothap;
    cout << "\n Nhap so thanh go Little Vasya co: ";
    cin >> n;
    m = n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\n Nhap do dai thanh go so " << i << ": ";
        cin >> a[i];
        while (a[i] <= 0)
        {
            cout << "\n Do dai lon hon 0, nhap lai do dai thanh go so " << i << ": ";
            cin >> a[i];
        }
    }
    xuatmang(a,n);
    for (int i = 1; i <= n; i++)
    {
        int tam=1;
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
        xuatmang(a,n);
        if (tam > chieucao)
            chieucao = tam;
    }
    sothap = n;
    cout << "Towers(a[" << m << "]) = [" << chieucao << "," << sothap << "]";
}