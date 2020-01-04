#include <iostream>
using namespace std;

int main()
{
	int n, tiendien;
	cout << "Nhap vao so dien tieu thu trong 1 thang: ";
	cin >> n;

	if (n <= 100)
	{
		tiendien = 750 * n;
		cout << "Tien dien la: " << tiendien;
	}
	else if (n <= 200 && n > 100)
	{
		tiendien = 75000 + (n - 100) * 1250;
		cout << "Tien dien la: " << tiendien;
	}
	else if (n <= 300 && n > 200)
	{
		tiendien = 200000+ (n - 200) * 1750;
		cout << "Tien dien la: " << tiendien;
	}
	else
	{
		tiendien = 375000 + (n - 300) *3000;
		cout << "Tien dien la: " << tiendien;
	}
	return 0;
}