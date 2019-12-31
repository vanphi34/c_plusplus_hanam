
using namespace std ;
#include<iostream>
int main ()
{	
	int a,b;
	int tong , hieu ,tich,thuong , Z,dongdu ;
	cout<< "nhap a"<<endl;
	cin>>a;
	cout<< "nhap b"<<endl;
	cin>>b;
	tong =a+b;
	hieu=a-b;
	tich =a*b;
	thuong =a/b;
	dongdu =a%b;
	Z=tong +hieu +tich +thuong+dongdu;
	cout<<"tong="<< tong <<endl;
	cout<<"hieu="<< hieu <<endl;
	cout<<"tich="<< tich <<endl;
	cout<<"dongdu= "<< dongdu <<endl;
	cout<<"thuong= "<< thuong <<endl;
	cout<<"z = "<< Z <<endl;
	return 0 ;
}




