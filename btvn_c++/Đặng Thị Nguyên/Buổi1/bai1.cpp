#include<iostream>

 using namespace std ;
 
int main(){
	int a,b;
	cout<<"nhap a,b:"; cin>> a>>b;
	int tong, hieu, tich;
	int thuong;
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=a%b;
	cout<<"tong a+b="; cout<< tong <<endl;
	cout<<"hieu a-b="; cout<< hieu<< endl;
	cout<<"tich a*b="; cout<< tich<< endl;
	cout<<"thuong a%b="; cout<< thuong<< endl;
	
	return 0;
}
