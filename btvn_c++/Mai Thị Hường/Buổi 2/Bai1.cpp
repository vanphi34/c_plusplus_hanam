#include <iostream>
using namespace std;

int main()
{
	int a, tienkm;
	cout << "Nhap vao so tien phai tra: ";
	cin >> a;

	if (a >= 200 && a < 300)
	{
		tienkm =a * 0.2;
		cout << "Tien khuyen mai la: " << tienkm << endl;
	}
	else if (a > 300)
	{
		tienkm = a * 0.3;
		cout << "Tien khuyen mai la: " << tienkm << endl;
	}
	else
	{
		cout << "Tien khuyen mai la: " << "0" << endl;
	}

	return 0;
}