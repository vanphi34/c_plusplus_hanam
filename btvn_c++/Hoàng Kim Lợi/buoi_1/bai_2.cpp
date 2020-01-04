#include <iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Nhap so dong cho tam giac can ve: ";
	cin>>n;
	for(i=1;i<2*n;i+=2)
	 {
	 	for(int j=0;j<i;j++)
	  	cout<<"*";
	  cout<<"\n";
	 }
	return 0;  
}
