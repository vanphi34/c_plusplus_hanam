#include<iostream>
using namespace std;
int main(){
	int n,T;
	cout<<"nhap so dien tieu thu trong 1 thang";
	do{
		cin>>n;
		if(n<0)
		cout<<"nhap lai ";
	}while(n<0);
	if(n<=100){
		T=n*750;
		cout<<"\n so tien phai tra la :"<<T;
	}
	else if(n>100&&n<=200)
	{
		T=75000+(n-100)*1250;
		cout<<"\n so tien phai tra la :"<<T;
	}
	else if(n>200&&n<=300)
	{
		T=75000+(n-100)*1250+(n-200)*1750;
		cout<<"\n so tien phai tra la :"<<T;
	}
	else
	{
	T=75000+(n-100)*1250+(n-200)*1750+(n-300)*3000;
	cout<<"\n so tien phai tra la :"<<T;
	}
	return 0;
	
}
