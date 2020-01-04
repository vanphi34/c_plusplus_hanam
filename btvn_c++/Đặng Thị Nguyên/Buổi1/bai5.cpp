#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	do{
	cout<<"nhap vao 3 canh tam giac a,b,c= ";
	cin>>a>>b>>c;}
	while(a<0||b<0||c<0);
	if(a+b>c&&a+c>b&&b+c>a)
	cout<<"they could be 3 sides of a triangle";
	else cout<<"they could not be 3 sides of a triangle";
	return 0;
}
