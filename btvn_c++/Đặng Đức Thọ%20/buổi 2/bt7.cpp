/*
Tèo có rất nhiều sách. Tí nhìn thấy đống sách của Tèo rất lộn xộn nên muốn sắp xếp lại cho ngăn nắp. 
Thấy Tí có nhã ý giúp đỡ, Tèo rất vui, nhưng đồng thời Tèo lại nghĩ ra 1 trò chơi để đố Tí. 
Tèo viết lên mỗi bìa sách 1 số nguyên nào đó. Khi Tí chọn 1 quyển sách bất kì, con số x trên bìa sách đó 
có ý nghĩa rằng Tí chỉ được phép xếp chồng lên quyển đó tối đa x quyển sách khác mà thôi. 
Tèo đố Tí làm cách nào để xếp được 1 chồng sách cao nhất có thể.
- Cho mảng arr , arr[i] là số mà Tèo sẽ viết lên quyển sách thứ i . Mỗi số không vượt quá 1000. 
  Hãy giúp Tí tìm ra số lượng nhiều nhất quyển sách mà Tí có thể xếp thành 1 chồng.
*/
#include <bits/stdc++.h>
using namespace std;
void nhapmang(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap so X ma Teo viet len quyen so "<<i+1<<" : ";
        cin>>a[i];
        while (a[i]<0 || a[i]>1000)
        {
            cout << "Nhap lai so X ma Teo viet len quyen so " << i + 1 << " : ";
            cin >> a[i];
        }
    }
}
int main ()
{
    int n, max=1;
    cout << "Nhap so quyen sach Teo co: ";
    cin >> n;
    while (n < 0)
    {
        cout << "Nhap lai so quyen sach Teo co: ";
        cin >> n;
    }
    int a[n];
    nhapmang(a,n);
    for (int i = 0; i < n; i++)
        if (a[i] > max)
            max = a[i];
    if (max+1<=n)
        max+=1;
    else 
        max=n;
    cout << "sortbooks(arr) = "<<max;
}