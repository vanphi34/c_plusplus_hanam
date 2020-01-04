#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A + B > C && A + C > B && B + C > A)
		cout << "They could be 3 sides of a triangle";
	else
		cout << "They could not be 3 sides of a triangle";

	return 0;
}