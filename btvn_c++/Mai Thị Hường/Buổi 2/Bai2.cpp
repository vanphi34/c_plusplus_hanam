#include <iostream>
using namespace std;

void kiemtra(int n)
{
	int tongsnt = 0;
	for (int j = 1; j <= n; j++)
	{
		int dem = 0;
		for (int i = 1; i <= j; i++)
		{
			if (j % i == 0)
				dem++;
		}
		if (dem == 2)
			tongsnt++;
	}
	cout << "Co " << tongsnt << " so nguyen to";
}

int main()
{
	int  n, tong, tongsnt = 0;
	cout << "Nhap n: ";
	cin >> n;
	tong = n * (n + 1) / 2;
	cout << "Tong la: " << tong << endl;
	kiemtra(n);
	return 0;

}


