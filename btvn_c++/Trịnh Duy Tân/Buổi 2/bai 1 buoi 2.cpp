#include<iostream>
using namespace std;
int main(){
	float n,T;
	cout<<"nhap so tien ";
	do{
		cin>>n;
		if(n<0)
		cout<<"nhap lai ";
	}while(n<0);
	if(n>=200&&n<300)
	{
		T=n*0.8; 
		cout<<"so tien phai tra la :"<< T ;
	}
	else if(n>=300)
	{
		T=n*0.7;
		cout<<"so tien phai tra la :"<< T ;
	}
	else
	{
		T=n*1;
	cout<<"so tien phai tra la :"<< T ;
	}
	return 0;
}
 
