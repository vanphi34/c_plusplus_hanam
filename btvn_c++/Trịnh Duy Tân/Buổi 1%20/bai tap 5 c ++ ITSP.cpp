#include<iostream>
using namespace std ;
int main ()
{
	int a,b,c ;
	cout << "nhap canh a"<< endl;
	cin>> a;
	cout << "nhap canh b"<< endl;
	cin>> b;
	cout << "nhap canh c"<< endl;
	cin>> c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		cout <<"They could be 3 sides of a triangle"<<endl;
	}
	else
	{
	
		cout <<"They could not be 3 sides of a triangle"<<endl ;
	}
	return 0;
	
	
}
