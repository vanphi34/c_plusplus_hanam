#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	do
	{
		cout<<"Nhap do dai 3 canh cua tam giac:";
	    cin>>a>>b>>c;
	    if(a<=0||b<=0||c<=0) cout<<"Do dai phai co gai tri duong";
	} while(a<=0||b<=0||c<=0);
	if(a<b+c&&b<a+c&&c<a+b) cout <<"They could be 3 sides of a triangle";
	else cout<<"They could not be 3 sides of a triangle";
	return 0;
}
