#include<iostream>
using namespace std;
int main()
{
	int n , f0=0 , f1=1 , f2;
	cout<<"nhap n";
	do{
	cin>>n;
	if(n<0)
	cout<<"nhap lai n";
	}while (n<0);
	cout<< n << " so fibonaci dau tien la :";
	cout<<f0<<"  "<<f1<<"  ";
	for(int i=0;i<n-2;i++)
	{
		f2=f1+f0;
		cout<<f2<<"  ";
		f0=f1;
		f1=f2;
	}
	
}
