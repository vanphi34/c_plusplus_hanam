#include<iostream>
using namespace std;
int tiendien(int n){
	int t=0;
	if(n<=100){
		t=n*750;
	}
	else if(n>=101 && n<=200){
		t=75000+(n-100)*1250;
	}
	else if(n>=201 && n<=300){
		t=75000+125000+(n-200)*1750;
	}
	else
		t=75000+125000+175000+(n-300)*3000;
	cout<<"So tien phai tra la: "<<t;
	return t;	
}
int main(){
	int n;
	cout<<"Nhap so dien(kWh): ";
	cin>>n;
	tiendien(n);
}
