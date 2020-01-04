#include <iostream>
using namespace std;

int main()
{
	int n, fib1 = 1, fib2 = 1, fib = 2;
	cout << "Nhap so n can kiem tra: ";
	cin >> n;

	while (fib1 + fib2 <= n)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
	}

	if (fib == n)
	{
		cout << "Day la so thuoc day fibonacci";
	}
	else
		cout << "Day la so khong thuoc day fibonacci";

	return 0;
}