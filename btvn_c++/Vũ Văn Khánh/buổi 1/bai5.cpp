#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout<<"nhap lan luot 3 canh a,b,c cua tam giac: ";cin>>a>>b>>c;
    if((a+b>c) && (b+c>a) &&(a+c>b))
		cout<<"They could be 3 sides of a triangle";
	else
		cout<<"They could not be 3 sides of a triangle";
    return 0;
}
