#include <iostream>
using namespace std;

int main()
{
	int d, m, y, ngaymax;
	cout << "Nhap vao ngay d/m/y: " << endl;
	cout << "d = ";
	cin >> d;
	cout << "m = ";
	cin >> m;
	cout << "y = ";
	cin >> y;

	if (y < 0 || m <= 0 || m > 12 || d <= 0 || d > 31)
	{
		cout << "Ngay khong hop le";
	}
	else {
		switch (m)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ngaymax = 31;
			break;
		case 2:
			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
				ngaymax = 29;
			else
				ngaymax = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			ngaymax = 30;
			break;
		}
		if (d = ngaymax)
		{
			cout << "Ngay hop le!" << endl;
		}
		else
		{
			cout << "Ngay khong hop le!" << endl;
		}
	}
}